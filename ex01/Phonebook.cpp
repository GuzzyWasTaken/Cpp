/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: auzochuk <auzochuk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/02 14:51:04 by auzochuk      #+#    #+#                 */
/*   Updated: 2023/05/16 17:00:01 by auzochuk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

//todo: make a function that prints a line asked according to the index given. 
	//or print all of the current contacts.
//todo: format function
//todo:
// void DisplayContacts(PhoneBook PhoneBook)
// {
// 	t_Booklet *List = PhoneBook.Booklet;
	
// 	if (PhoneBook.NumberOfContacts == 0)
// 		std::cout << "no contacts rn" << std::endl;
// 	for(size_t i = 0; i < List[i].Name.length(); i++)
// 	{
// 		if(List[i].Name.length() > 10)
// 		{
// 			List[i].Name.replace(10, 1, ".");
// 			List[i].Name.erase(10, List[i].Name.length());
// 		}
// 	}
	
// 	std::cout << "|  Index   |First Name|Last Name |Nickname  |" << std::endl;
// 	std::cout << "|----------|----------|----------|----------|" << std::endl;
// 	std::cout.width(10);
// 	std::cout << "|    1     |" << List[0].Name << "|----------|----------|" << std::endl;
	
// }

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
void PrintContact(t_Booklet Contact)
{
	std::cout << "Name:" << Contact.Name << std::endl;
	std::cout << "Last name:" << Contact.LastName << std::endl;
	std::cout << "Nickame:" << Contact.nickname << std::endl;
	std::cout << "Index:" << Contact.index << std::endl;
}
void SearchContacts(PhoneBook PhoneBook)
{
	std::string Input;
	std::cout << "Search:";
	std::cin >> Input;
	for(int i = 0; i < 9; i++)
	{
		if (Input == PhoneBook.Booklet[i].Name)
			PrintContact(PhoneBook.Booklet[i]);
	}
}

void PrintLine(PhoneBook &PhoneBook, int Index)
{
	Format(PhoneBook.Booklet[Index]);
	std::cout << "|";
	std::cout << Index;
	std::cout << "|";
	std::cout << PhoneBook.Booklet[Index].Name;
	std::cout << "|";
	std::cout << PhoneBook.Booklet[Index].LastName;
	std::cout << "|";
	std::cout << PhoneBook.Booklet[Index].nickname;
	std::cout << "|";
}

void AddContact(PhoneBook &PhoneBook)
{
	int index = 0;
	
	if (PhoneBook.NumberOfContacts == 9)
		index = 1;
	else
		index = PhoneBook.NumberOfContacts + 1;
	std::cout << "Name:" ;
	std::cin >> PhoneBook.Booklet[index - 1].Name;
	std::cout << "Last Name:";
	std::cin >> PhoneBook.Booklet[index - 1].LastName;
	std::cout << "Nickname:";
	std::cin >> PhoneBook.Booklet[index - 1].nickname;
	PhoneBook.Booklet[index - 1].index = index - 1;
	if (PhoneBook.NumberOfContacts < 9)
		PhoneBook.NumberOfContacts += 1;
	
}

int main()
{
	PhoneBook Phonebook;
	
	Phonebook.NumberOfContacts = 0;
	Phonebook.Booklet[0].Name = "DanniieelllLLLLl";
	std::string Input;
	std::cout << "Welcome to my phonebook" << std::endl;
	while(Input != "EXIT")
	{
		std::cin >> Input;
		if (Input == "EXIT")
			return(0);
		if (Input == "SEARCH")
			SearchContacts(Phonebook);
		if(Input == "ADD")
			AddContact(Phonebook);
		
	}
}