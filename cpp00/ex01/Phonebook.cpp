/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: auzochuk <auzochuk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/02 14:51:04 by auzochuk      #+#    #+#                 */
/*   Updated: 2023/08/10 20:16:35 by auzochuk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include "Phonebook.hpp"
#include "Booklet.hpp"
#include <cstdlib>
#include <cstring>
#include <iomanip>


void SearchContacts(PhoneBook Phonebook)
{
	std::cout << "\033[1;38;5;208m|  Index   |First Name|Last Name |Nickname  |\033[0m" << std::endl;
	std::cout << "\033[1;38;5;208m|----------|----------|----------|----------|\033[0m" << std::endl;
	for(int i = 0; i < Phonebook.NumberOfContacts; i++)
	{
		if (Phonebook.NumberOfContacts == 0)
			break;
		Phonebook.Booklet[i].PrintLine(i);
	}
	while(1)
	{
		std::string Input;
		std::cout << "\033[1;34mSearch:\033[0m";
		std::getline(std::cin ,Input);
		int Index;
		try 
		{
			Index = std::stoi(Input, NULL);
		}
		catch(std::invalid_argument & e)
		{
			std::cout << "\033[1;31m Value must be numerical \033[0m" << std::endl;
			continue;
		}
		if (Index >= 1 && Index <= Phonebook.NumberOfContacts)
		{
			Phonebook.Booklet[Index - 1].PrintContact();
			break;
		}
		else
			std::cout << "\033[1;31m invalid input \033[0m\n";
	}
	
}

void AddContact(PhoneBook &Phonebook)
{
    int index = 0;
    while (true)
    {
        if (Phonebook.NumberOfContacts == 8)
            index = 0;
        else
            index = Phonebook.NumberOfContacts;
        std::string name, lastName, nickname, phoneNumber, darkSecret;

        std::cout << "\033[1;34mName: \033[0m";
        if (!std::getline(std::cin, name) || name.empty())
        {
            std::cout << "\033[1;31m Field must be filled in \033[0m" << std::endl;
            continue;
        }

        std::cout << "\033[1;34mLast Name: \033[0m";
        if (!std::getline(std::cin, lastName) || lastName.empty())
        {
            std::cout << "\033[1;31m Field must be filled in \033[0m" << std::endl;
            continue;
        }

        std::cout << "\033[1;34mNickname: \033[0m";
        if (!std::getline(std::cin, nickname) || nickname.empty())
        {
            std::cout << "\033[1;31m Field must be filled in \033[0m" << std::endl;
            continue;
        }

        std::cout << "\033[1;34mPhone Number: \033[0m";
        if (!std::getline(std::cin, phoneNumber) || phoneNumber.empty())
        {
            std::cout << "\033[1;31m Field must be filled in \033[0m" << std::endl;
            continue;
        }

        std::cout << "\033[1;34mDarkest Secret: \033[0m";
        if (!std::getline(std::cin, darkSecret) || darkSecret.empty())
        {
            std::cout << "\033[1;31m Field must be filled in \033[0m" << std::endl;
            continue;
        }

        Phonebook.AdContact(name, lastName, nickname, phoneNumber, darkSecret, index);
        break;
    }
}

int main()
{
	PhoneBook Phonebook;
	
	Phonebook.NumberOfContacts = 0;
	std::string Input;
	std::cout << "Welcome to my Phonebook" << std::endl;
	while(Input != "EXIT")
	{
		std::cout << "\033[1;34m COMMANDS:\033[0m [SEARCH] \033[1;32m[ADD]\033[0m \033[1;31m[EXIT]\033[0m:";
		if (!std::getline(std::cin, Input))
		{
			std::cout << "\033[1;31m EOF DETECTED \033[0m" << std::endl;

			exit (0);
		}
		if (Input == "EXIT")
			return(0);
		if (Input == "SEARCH")
		{
			if (Phonebook.NumberOfContacts == 0)
			{
				std::cout << "\033[1;31m Please add a contact before searching \033[0m" << std::endl;
				continue;
			}
			SearchContacts(Phonebook);
		}
		if(Input == "ADD")
			AddContact(Phonebook);
	}
}