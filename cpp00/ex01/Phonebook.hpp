/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: auzochuk <auzochuk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/02 14:52:57 by auzochuk      #+#    #+#                 */
/*   Updated: 2023/08/03 17:19:14 by auzochuk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>

class t_Booklet
{
public:
    t_Booklet();
    ~t_Booklet();
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
        PhoneBook();
        ~PhoneBook();
        int     NumberOfContacts;
        t_Booklet Booklet[8];
};

#endif







//phonebook structure |          | 10 wide 4 columns 