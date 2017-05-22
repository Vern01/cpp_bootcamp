/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 12:11:58 by vivan-de          #+#    #+#             */
/*   Updated: 2017/05/22 12:11:59 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int     main(int argc, char **argv)
{
    char    compare_value;
    
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return(0);
    }
    for (int argv_index = 1; argv[argv_index]; argv_index++)
    {
        for(int string_index = 0; argv[argv_index][string_index]; string_index++)
        {
            compare_value = argv[argv_index][string_index];
            if (compare_value > 96 && compare_value < 123)
                compare_value = std::toupper(compare_value);
            std::cout << compare_value;
        }
    }
        std::cout << std::endl;
}