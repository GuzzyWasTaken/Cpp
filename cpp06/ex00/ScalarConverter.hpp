#ifndef CONVERTER_H
#define CONVERTER_H

#include <iostream>
#include <string>
#include <climits>
#include <limits>
#include <cmath>
#include <iomanip>

enum e_type {
	UNDETERMINED,
	INVALID,
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	NAN_,
	INF
};

class Converter {
    
private:
  std::string arg_;
	e_type type_;
	void determine_type_(void);
	void determine_int_double_float_(std::string str);
	void print_conversions_char_(void) const;
	void print_conversions_int_(void) const;
	void print_conversions_double_(void) const;
	void print_conversions_float_(void) const;
	void print_conversions_nan_(void) const;
	void print_conversions_inf_(void) const;

 public:

  Converter();
  Converter(const Converter &copy);


  ~Converter();


  Converter &operator=(const Converter &other);


  std::string get_arg(void) const;
  void set_arg(const std::string &str);
    e_type get_type(void) const;


  void print_conversions(void);

 
};

#endif