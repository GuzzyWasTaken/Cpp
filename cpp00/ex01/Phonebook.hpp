/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: auzochuk <auzochuk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/02 14:52:57 by auzochuk      #+#    #+#                 */
/*   Updated: 2023/08/10 20:30:29 by auzochuk      ########   odam.nl         */
/*                                S                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H
# include <iostream>
#include "Booklet.hpp"
#include <cstdlib>
#include <cstring>
#include <iomanip>


class PhoneBook
{
public:
    void AdContact(const std::string& name, const std::string& lastName,
                    const std::string& nickname, const std::string& phoneNumber,
                    const std::string& darkSecret, int index);
    PhoneBook();
    ~PhoneBook();
    int NumberOfContacts;
    t_Booklet Booklet[8];
};

#endif // PHONEBOOK_H
