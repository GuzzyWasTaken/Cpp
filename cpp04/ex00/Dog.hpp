#ifndef DOG_HPP
# define DOG_HPP

# include <cstdlib>
# include <string>
# include <iomanip>
# include <fstream>
# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        ~Dog();
        void makeSound() const ;
};

#endif