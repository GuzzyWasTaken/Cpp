#ifndef POLYMORPH_HPP
# define POLYMORPH_HPP

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
        Animal(std::string Name);
        virtual ~Animal();
        virtual void makeSound() const = 0;
};

class Dog : public Animal
{
    public:
        Dog();
        void makeSound() const ;
};

class Cat : public Animal
{
    public:
        Cat();
        void makeSound() const ;
};

#endif