/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: auzochuk <auzochuk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/02 14:51:04 by auzochuk      #+#    #+#                 */
/*   Updated: 2023/06/07 19:33:32 by auzochuk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include "Phonebook.hpp"
#include <cstdlib>
#include <cstring>
#include <iomanip>

//todo: format function
//todo:

void Format(t_Booklet &Contact)
{
	if (Contact.Name.length() > 10)
	{
		Contact.Name.replace(10, 1, ".");
		Contact.Name.erase(10, Contact.Name.length());
	}
	if (Contact.LastName.length() > 10)
	{
		Contact.LastName.replace(10, 1, ".");
		Contact.LastName.erase(10, Contact.LastName.length());
	}
	if (Contact.nickname.length() > 10)
	{
		Contact.nickname.replace(10, 1, ".");
		Contact.nickname.erase(10, Contact.nickname.length());
	}
}
//todo: make sure contacts are deleetd once 8 is reached.


void FormatPrint(std::string str)
{
	if (str.length() < 10)
		std::cout << std::setw(10 - str.length()) << std::left << str;
	else if (str.length() > 10)
	{
		str.erase(10, str.length());
		str.replace(10, 1, ".");
		std::cout << str;
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
}

void PrintLine(PhoneBook &PhoneBook, int Index)
{
	Format(PhoneBook.Booklet[Index]);
	//AddSpace(PhoneBook.Booklet[Index]);
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
		std::cin >> Input;
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
		// if (Input == "BACK")
		// 	break;
	}
	
}


void AddContact(PhoneBook &PhoneBook)
{
	int index = 0;
	
	if (PhoneBook.NumberOfContacts == 8)
		index = 1;
	else
		index = PhoneBook.NumberOfContacts + 1;
	std::cout << "index = " <<  index << std::endl;
	std::cout << "Name:" ;
	std::cin >> PhoneBook.Booklet[index - 1].Name;
	std::cout << "Last Name:";
	std::cin >> PhoneBook.Booklet[index - 1].LastName;
	std::cout << "Nickname:";
	std::cin >> PhoneBook.Booklet[index - 1].nickname;
	PhoneBook.Booklet[index - 1].index = index - 1;
	if (PhoneBook.NumberOfContacts < 8)
		PhoneBook.NumberOfContacts += 1;
	
}

int main()
{
	PhoneBook Phonebook;
	
	Phonebook.NumberOfContacts = 0;
	// Phonebook.Booklet[0].Name = "DanniieelllLLLLl";
	std::string Input;
	std::cout << "Welcome to my phonebook" << std::endl;
	while(Input != "EXIT")
	{
		std::cout << "COMMANDS [SEARCH] [ADD] [EXIT]:";
		std::cin >> Input;
		if (Input == "EXIT")
			return(0);
		if (Input == "SEARCH")
			SearchContacts(Phonebook);
		if(Input == "ADD")
			AddContact(Phonebook);
		
	}
}