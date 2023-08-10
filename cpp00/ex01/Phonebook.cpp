/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: auzochuk <auzochuk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/02 14:51:04 by auzochuk      #+#    #+#                 */
/*   Updated: 2023/07/14 18:19:05 by auzochuk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include "Phonebook.hpp"
#include <cstdlib>
#include <cstring>
#include <iomanip>

void FormatPrint(const std::string str)
{
    if (str.length() < 10)
        std::cout << std::setw(10) << std::right << str;
    else if (str.length() > 10)
    {
        std::string modifiedStr = str.substr(0, 10);
        modifiedStr.replace(9, 1, ".");
        std::cout << modifiedStr;
    }
    else
        std::cout << str;
}
void PrintContact(t_Booklet Contact)
{
	std::cout << "Name:" << Contact.Name << std::endl;
	std::cout << "Last name:" << Contact.LastName << std::endl;
	std::cout << "Nickame:" << Contact.nickname << std::endl;
	std::cout << "Index:" << Contact.index + 1 << std::endl;
	std::cout << "Phone Number:" << Contact.PhoneNumber << std::endl;
	std::cout << "Darkest Secret:" << Contact.DarkSecret << std::endl;
	
}

void PrintLine(PhoneBook &Phonebook, int Index)
{
	std::cout << "|    ";
	std::cout << Index;
	std::cout << "     |";
	FormatPrint(Phonebook.Booklet[Index].Name);
	std::cout << "|";
	FormatPrint(Phonebook.Booklet[Index].LastName);
	std::cout << "|";
	FormatPrint(Phonebook.Booklet[Index].nickname);
	std::cout << "|" << std::endl;
}

void SearchContacts(PhoneBook Phonebook)
{
    std::cout << "|  Index   |First Name|Last Name |Nickname  |" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	for(int i = 0; i < Phonebook.NumberOfContacts; i++)
	{
		if (Phonebook.NumberOfContacts == 0)
			break;
		PrintLine(Phonebook, i);
	}
	while(1)
	{
		std::string Input;
		std::cout << "Search:";
		std::getline(std::cin ,Input);
		int Index;
		try 
		{
			Index = std::stoi(Input, NULL);
		}
		catch(std::invalid_argument & e)
		{
			std::cout << "Must be numerical value" << std::endl;
			continue;
		}
		if (Index >= 0 && Index <= Phonebook.NumberOfContacts)
		{
			PrintContact(Phonebook.Booklet[Index - 1]);
			break;
		}
	}
	
}

//todo check if empty
void AddContact(PhoneBook &Phonebook)
{
	int index = 0;
	long PhoneNumber = 0;

	if (Phonebook.NumberOfContacts == 8)
		index = 1;
	else
		index = PhoneBook.NumberOfContacts;
		//index = (Phonebook.NumberOfContacts == 0) ? index = 1 : index = Phonebook.NumberOfContacts;
	std::cout << "Name:" ;
	if (!std::getline(std::cin, Phonebook.Booklet[index].Name) || Phonebook.Booklet[index].Name.empty())
	{
		std::cout << "Field must be filled in" << std::endl;
		return;
	}
 	std::cout << "Last Name: ";
    if (!std::getline(std::cin, Phonebook.Booklet[index].LastName) || Phonebook.Booklet[index].LastName.empty()) {
        std::cout << "Field must be filled in" << std::endl;
        return;
    }

    std::cout << "Nickname: ";
    if (!std::getline(std::cin, Phonebook.Booklet[index].nickname) || Phonebook.Booklet[index].nickname.empty()) {
        std::cout << "Field must be filled in" << std::endl;
        return;
    }

    std::cout << "Phone Number: ";
    if (!std::getline(std::cin, Phonebook.Booklet[index].PhoneNumber) || Phonebook.Booklet[index].PhoneNumber.empty()) {
        std::cout << "Field must be filled in" << std::endl;
        return;
    }

    std::cout << "Darkest Secret: ";
    if (!std::getline(std::cin, Phonebook.Booklet[index].DarkSecret) || Phonebook.Booklet[index].DarkSecret.empty()) {
        std::cout << "Field must be filled in" << std::endl;
        return;
    }
	try 
	{
		PhoneNumber = std::stoi(Phonebook.Booklet[index].PhoneNumber, NULL);
	}
	catch(std::invalid_argument & e)
	{
		std::cout << "Must be numerical value, Add contact again." << std::endl;
		return;
	}
	std::cout << "Darkest Secret:";
	std::getline(std::cin, Phonebook.Booklet[index].DarkSecret);
	Phonebook.Booklet[index].index = index;
	if (Phonebook.NumberOfContacts < 8)
		Phonebook.NumberOfContacts += 1;
	std::cout << "made contact in element: " << (index - 1) << "proof: " << Phonebook.Booklet[index].Name << std::endl;
	
	
}

int main()
{
	PhoneBook Phonebook;
	
	Phonebook.NumberOfContacts = 0;
	memset(Phonebook.Booklet, 0, sizeof(Phonebook.Booklet));
	std::string Input;
	std::cout << "Welcome to my Phonebook" << std::endl;
	while(Input != "EXIT")
	{
		std::cout << "COMMANDS [SEARCH] [ADD] [EXIT]:";
		if (!std::getline(std::cin, Input))
		{
			std::cout << "EOF detected" << std::endl;
			exit (0);
		}
		if (Input == "EXIT")
			return(0);
		if (Input == "SEARCH")
			SearchContacts(Phonebook);
		if(Input == "ADD")
			AddContact(Phonebook);
	}
}