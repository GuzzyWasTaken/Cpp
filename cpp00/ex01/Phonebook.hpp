/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: auzochuk <auzochuk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/02 14:52:57 by auzochuk      #+#    #+#                 */
/*   Updated: 2023/07/14 18:45:27 by auzochuk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>

class t_Booklet
{
public:
    std::string Name;
    std::string LastName;
    std::string nickname;
    std::string PhoneNumber;
    std::string DarkSecret;
    
    int index;
};

class PhoneBook
{
    public:
        int     NumberOfContacts;
        t_Booklet Booklet[8];
};

#endif







//phonebook structure |          | 10 wide 4 columns 