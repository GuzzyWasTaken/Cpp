#include "ScalarConverter.hpp"
#include <sstream>
#include <limits>

Converter::Converter() : type_(UNDETERMINED) {}

Converter::Converter(const Converter &copy) {
  this->arg_ = copy.get_arg();
  this->type_ = copy.get_type();
}

//Converter::Converter(const Converter &copy) : arg_(copy.arg_), type_(copy.type_) {}

Converter::~Converter() {}

Converter &Converter::operator=(const Converter &other) {
    if (this != &other) {
        arg_ = other.arg_;
        type_ = other.type_;
    }
    return *this;
}

std::string Converter::get_arg() const {
    return arg_;
}

void Converter::set_arg(const std::string &str) {
    arg_ = str;
    determine_type_();
}

e_type Converter::get_type() const {
    return type_;
}

void Converter::print_conversions() {
    switch (type_) {
        case CHAR:
            print_conversions_char_();
            break;
        case INT:
            print_conversions_int_();
            break;
        case FLOAT:
            print_conversions_float_();
            break;
        case DOUBLE:
            print_conversions_double_();
            break;
        case NAN_:
            print_conversions_nan_();
            break;
        case INF:
            print_conversions_inf_();
            break;
        default:
            std::cout << "Invalid input" << std::endl;
    }
}

void Converter::determine_type_() {
    if (arg_.length() == 1)
        type_ = CHAR;

    else if (arg_.length() == 3 && arg_[0] == '\'' && arg_[2] == '\'') 
        type_ = CHAR;

    else if (arg_ == "nan" || arg_ == "nanf") 
        type_ = NAN_;
    
     else if (arg_ == "+inf" || arg_ == "-inf" || arg_ == "+inff" || arg_ == "-inff") 
        type_ = INF;
     else 
        determine_int_double_float_(arg_);
}

void Converter::determine_int_double_float_(std::string str) {
    bool has_dot = false;
    bool has_f = false;
    
    if (str[0] == '+' || str[0] == '-') 
        str = str.substr(1);
    
    for (char c : str) 
    {
        if (c == '.') 
        {
            if (has_dot) 
            {
                type_ = INVALID;
                return;
            }
            has_dot = true;
        } 
        else if (c == 'f') 
        {
            if (has_f || str.back() != 'f') 
            {
                type_ = INVALID;
                return;
            }
            has_f = true;
        } 
        else if (!std::isdigit(c)) 
        {
            type_ = INVALID;
            return;
        }
    }
    
    if (has_f && !has_dot) 
    {
        type_ = INVALID;
    } 
    else if (has_f) 
    {
        type_ = FLOAT;
    } 
    else if (has_dot) 
    {
        type_ = DOUBLE;
    } 
    else 
    {
        type_ = INT;
    }
}

void Converter::print_conversions_char_() const {
    char c = arg_.length() == 1 ? arg_[0] : arg_[1];
    
    std::cout << "char: '" << c << "'" << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

void Converter::print_conversions_int_() const {
    int i = std::stoi(arg_);
    
    if (i >= 0 && i <= 127) {
        if (std::isprint(i)) {
            std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
        } else {
            std::cout << "char: Non displayable" << std::endl;
        }
    } else {
        std::cout << "char: impossible" << std::endl;
    }
    
    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
}

void Converter::print_conversions_float_() const {
    float f = std::stof(arg_);
    
    if (f >= 0 && f <= 127 && f == static_cast<int>(f)) {
        if (std::isprint(static_cast<int>(f))) {
            std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
        } else {
            std::cout << "char: Non displayable" << std::endl;
        }
    } else {
        std::cout << "char: impossible" << std::endl;
    }
    
    if (f >= std::numeric_limits<int>::min() && f <= std::numeric_limits<int>::max() && f == static_cast<int>(f)) {
        std::cout << "int: " << static_cast<int>(f) << std::endl;
    } else {
        std::cout << "int: impossible" << std::endl;
    }
    
    std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(f) << std::endl;
}

void Converter::print_conversions_double_() const {
    double d = std::stod(arg_);
    
    if (d >= 0 && d <= 127 && d == static_cast<int>(d)) {
        if (std::isprint(static_cast<int>(d))) {
            std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
        } else {
            std::cout << "char: Non displayable" << std::endl;
        }
    } else {
        std::cout << "char: impossible" << std::endl;
    }
    
    if (d >= std::numeric_limits<int>::min() && d <= std::numeric_limits<int>::max() && d == static_cast<int>(d)) {
        std::cout << "int: " << static_cast<int>(d) << std::endl;
    } else {
        std::cout << "int: impossible" << std::endl;
    }
    
    if (d <= std::numeric_limits<float>::max() && d >= -std::numeric_limits<float>::max()) {
        std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(d) << "f" << std::endl;
    } else {
        std::cout << "float: impossible" << std::endl;
    }
    
    std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
}

void Converter::print_conversions_nan_() const {
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: nanf" << std::endl;
    std::cout << "double: nan" << std::endl;
}

void Converter::print_conversions_inf_() const {
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    
    if (arg_[0] == '-') {
        std::cout << "float: -inff" << std::endl;
        std::cout << "double: -inf" << std::endl;
    } else {
        std::cout << "float: +inff" << std::endl;
        std::cout << "double: +inf" << std::endl;
    }
}