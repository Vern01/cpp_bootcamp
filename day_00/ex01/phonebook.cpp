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

int     main()
{
    while (42)
    {
        std::string command;
        std::cout   << "Type:" << std::endl
                    << "\t'ADD', to add a new contact" << std::endl
                    << "\t'SEARCH' to get a list of all contacts. You can select a contact by index for more info." << std::endl
                    << "\t'EXIT' to leave the phonebook" << std::endl
                    << "> ";
        std::cin >> command;
        if (!command.compare("ADD"))
        {
            std::cout   << "Waiting for input:" << std::endl
                        << "> ";
            while ()
            std::cin >> command;
        }
        else if (!command.compare("SEARCH"))
        {
            //Give list of contacts;
            //Wait for index
        }
        else if (!command.compare("EXIT"))
            break;
    }
}