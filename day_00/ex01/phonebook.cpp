/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 14:49:21 by vivan-de          #+#    #+#             */
/*   Updated: 2017/05/22 14:49:23 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <string>



int main()
{
    Contacts    contacts[8];
    int         index;
    std::string command;
    
    while (42)
    {    
        std::cout << "Type:" << std::endl
                  << "\t'ADD', to add a new contact" << std::endl
                  << "\t'SEARCH' to get a list of all contacts. You can select a contact by index for more info." << std::endl
                  << "\t'EXIT' to leave the phonebook" << std::endl
                  << "> ";
        std::cin >> command;
        if (!command.compare("ADD"))
        {
            std::cout << "Firstname: ";
            std::cin.get();
            getline(std::cin, command);
            contacts[index].setFirstname(command);
            std::cout << "Lastname: ";
            getline(std::cin, command);
            contacts[index].setLastname(command);
            std::cout << "Nickname: ";
            getline(std::cin, command);
            contacts[index].setNickname(command);
            std::cout << "Login: ";
            getline(std::cin, command);
            contacts[index].setLogin(command);
            std::cout << "Postal Address: ";
            getline(std::cin, command);
            contacts[index].setPostal(command);
            std::cout << "Email: ";
            getline(std::cin, command);
            contacts[index].setEmail(command);
            std::cout << "Phone Number: ";
            getline(std::cin, command);
            contacts[index].setPhone(command);
            std::cout << "Birth Day: ";
            getline(std::cin, command);
            contacts[index].setBirth(command);
            std::cout << "Fav Meal: ";
            getline(std::cin, command);
            contacts[index].setMeal(command);
            std::cout << "Underwear Color: ";
            getline(std::cin, command);
            contacts[index].setUnderwear(command);
            std::cout << "Darkest Seceret: ";
            getline(std::cin, command);
            contacts[index].setSeceret(command);
            index++;
        }
        else if (!command.compare("SEARCH"))
        {

        }
        else if (!command.compare("EXIT"))
            break;
    }
}