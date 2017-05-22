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
            std::cin >> command;
            contacts[index].setFirstname(command);
            index++;
        }
        else if (!command.compare("SEARCH"))
        {
            for (int count = 0; count < index; count++)
            {
                std::cout << contacts[count].getFirstname() << std::endl;
            }
        }
        else if (!command.compare("EXIT"))
            break;
    }
}