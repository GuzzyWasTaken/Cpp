/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: auzochuk <auzochuk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/02 14:51:04 by auzochuk      #+#    #+#                 */
/*   Updated: 2023/06/12 20:04:56 by auzochuk      ########   odam.nl         */
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
        std::cout << std::setw(10) << std::left << str;
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

void PrintLine(PhoneBook &PhoneBook, int Index)
{
	std::cout << "|    ";
	std::cout << Index + 1;
	std::cout << "     |";
	FormatPrint(PhoneBook.Booklet[Index].Name);
	std::cout << "|";
	FormatPrint(PhoneBook.Booklet[Index].LastName);
	std::cout << "|";
	FormatPrint(PhoneBook.Booklet[Index].nickname);
	std::cout << "|" << std::endl;
}

void SearchContacts(PhoneBook PhoneBook)
{
    std::cout << "|  Index   |First Name|Last Name |Nickname  |" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	for(int i = 0; i < PhoneBook.NumberOfContacts; i++)
	{
		if (PhoneBook.NumberOfContacts == 0)
			break;
		PrintLine(PhoneBook, i);
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
		if (Index >= 0 && Index <= PhoneBook.NumberOfContacts)
		{
			PrintContact(PhoneBook.Booklet[Index - 1]);
			break;
		}
	}
	
}


void AddContact(PhoneBook &PhoneBook)
{
	int index = 0;
	if (PhoneBook.NumberOfContacts == 8)
		index = 1;
	else
		index = PhoneBook.NumberOfContacts + 1;
	std::cout << "Name:" ;
	std::getline(std::cin,PhoneBook.Booklet[index - 1].Name);
	std::cout << "Last Name:";
	std::getline(std::cin, PhoneBook.Booklet[index - 1].LastName);
	std::cout << "Nickname:";
	std::getline(std::cin, PhoneBook.Booklet[index - 1].nickname);
	std::cout << "Phone Number:";
	std::getline(std::cin, PhoneBook.Booklet[index - 1].PhoneNumber);
	std::cout << "Darkest Secret:";
	std::getline(std::cin, PhoneBook.Booklet[index - 1].DarkSecret);
	PhoneBook.Booklet[index - 1].index = index - 1;
	if (PhoneBook.NumberOfContacts < 8)
		PhoneBook.NumberOfContacts += 1;
	
}

int main()
{
	PhoneBook Phonebook;
	
	Phonebook.NumberOfContacts = 0;
	std::string Input;
	std::cout << "Welcome to my phonebook" << std::endl;
	while(Input != "EXIT")
	{
		std::cout << "COMMANDS [SEARCH] [ADD] [EXIT]:";
		std::getline(std::cin, Input);
		if (Input == "EXIT")
			return(0);
		if (Input == "SEARCH")
			SearchContacts(Phonebook);
		if(Input == "ADD")
			AddContact(Phonebook);
		
	}
}