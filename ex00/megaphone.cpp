/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: auzochuk <auzochuk@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/01 18:51:22 by auzochuk      #+#    #+#                 */
/*   Updated: 2023/05/01 19:19:46 by auzochuk      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <string>

int main(int argc, char *args[]) 
{
    if (argc <= 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    for (int i = 1; args[i]; i++)
    {
        std::string str = args[i];
        for (int x = 0; str[x]; x++)
            str[x] = std::toupper(str[x]);
        str.erase(0, str.find_first_not_of(" "));
        str.erase(str.find_last_not_of(" ") + 1);
        std::cout << str << " ";
    }
    std::cout << std::endl;
    return 0;
}