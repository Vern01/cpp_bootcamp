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

int     test_int(std::string value, int phonebook_size)
{
    if (value.length() == 1 && value[0] > 48 && value[0] < 57 && (value[0] - '0') <= phonebook_size)
        return 0;
    return 1;
}

int     main()
{
    Contacts    contacts[8];
    int         index;
    std::string command;
    
    index = 0;
    while (42)
    {    
        std::cout << "Type a command:" << std::endl;
        if (index < 8)
            std::cout   << "\t'ADD', to add a new contact" << std::endl;
        else
            std::cout << "\t'ADD', -Contacts is full!-" << std::endl;
        std::cout   << "\t'SEARCH' to get a list of all contacts.";
        if (index == 0)
            std::cout << " -Contact list is now empty-" << std::endl;
        else
            std::cout << std::endl;
        std::cout   << "\t'EXIT' to leave the phonebook" << std::endl
                    << "> ";
        getline(std::cin, command);
        if (!command.compare("ADD") && index < 8)
        {
            std::cout << "Firstname: ";
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
        else if (!command.compare("SEARCH") && index != 0)
        {
            std::cout   << " ___________________________________________ " << std::endl
                        << "|Index     |Firstname |Lastname  |Nickname  |" << std::endl
                        << " ___________________________________________ " << std::endl;
            for (int i = 0; i < index; i++)
            {
                contacts[i].printRow(i + 1);
            }
            std::cout << " ___________________________________________ " << std::endl;
            do
            {
                std::cout << "Select contact by index: ";
                getline(std::cin, command);
            } while (test_int(command, index));
            contacts[command[0] - '0' - 1].displayInfo();
        }
        else if (!command.compare("EXIT"))
            break;
        else if (!command.compare("clear"))
            system("clear");
    }
}