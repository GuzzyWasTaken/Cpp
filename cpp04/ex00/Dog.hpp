#ifndef CAT_HPP
# define CAT_HPP

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