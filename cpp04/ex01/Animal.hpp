#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <cstdlib>
# include <string>
# include <iomanip>
# include <fstream>
# include <iostream>

class Animal
{
    protected:
        std::string _Type;
    
    public:
        Animal();
        Animal(const Animal &Anim);
        Animal &operator=(const Animal &other);
        virtual ~Animal();
        virtual void makeSound() const;
        virtual std::string getType() const;
};





#endif