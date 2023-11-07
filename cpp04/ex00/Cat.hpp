#ifndef CAT_HPP
# define CAT_HPP

# include <cstdlib>
# include <string>
# include <iomanip>
# include <fstream>
# include <iostream>
# include "Animal.hpp"



class Cat : public Animal
{
    public:
        Cat();
        ~Cat();
        void makeSound() const ;
};


#endif