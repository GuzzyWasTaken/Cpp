#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() 
{

    const Animal* j = new Dog();
   // const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    //std::cout << i->getType() << " " << std::endl;
    i->makeSound(); // Outputs: Cat meows.
    j->makeSound(); // Outputs: Dog barks.

    const WrongAnimal* wrongCat = new WrongCat();
    std::cout << wrongCat->getType() << " " << std::endl;
    wrongCat->makeSound(); // Outputs: WrongAnimal makes a wrong sound.

    delete j;
   // delete i;
    delete wrongCat;

    return 0;
}