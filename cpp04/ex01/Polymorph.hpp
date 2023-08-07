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
        virtual ~Animal();
        virtual void makeSound() const = 0;
};

class Brain
{
    private:
        std::string _Ideas[100];
    public:
        Brain();
        ~Brain();
};

class Dog : public Animal
{
    private:
        Brain *_brain;
    public:
        Dog();
        ~Dog();
        void makeSound() const ;
};

class Cat : public Animal
{
    private:
        Brain *_brain;
    public:
        Cat();
        ~Cat();
        void makeSound() const ;
};


#endif