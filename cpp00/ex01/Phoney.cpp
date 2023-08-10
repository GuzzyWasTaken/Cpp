#include "Phonebook.hpp"
#include "Booklet.hpp"

PhoneBook::PhoneBook()
    : NumberOfContacts(0)
{
        for (int i = 0; i < 8; i++) {
        Booklet[i] = t_Booklet("", "", "", "", "", -1); // Provide default values
    }
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::AdContact(const std::string& name, const std::string& lastName,
                    const std::string& nickname, const std::string& phoneNumber,
                    const std::string& darkSecret, int index)
{
    Booklet[index] = t_Booklet(name, lastName, nickname, phoneNumber, darkSecret, index);
    if (NumberOfContacts == 8)
        return;
    NumberOfContacts++;

}