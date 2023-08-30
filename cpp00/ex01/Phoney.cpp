#include "Phonebook.hpp"
#include "Booklet.hpp"

PhoneBook::PhoneBook() : NumberOfContacts(0) , ContactCounter(0)
{

}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::AdContact(const std::string& name, const std::string& lastName,
                    const std::string& nickname, const std::string& phoneNumber,
                    const std::string& darkSecret, int index)
{
    Booklet[index] = t_Booklet(name, lastName, nickname, phoneNumber, darkSecret, index);
    std::cout << "created at index: " << index << std::endl;
    ContactCounter++;
    if (NumberOfContacts < 8)
        NumberOfContacts++;
    if (ContactCounter == 8)
    {
        ContactCounter = 0;
        return;
    }
}