/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falakus <falakus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 16:14:37 by falakus           #+#    #+#             */
/*   Updated: 2025/09/02 17:36:04 by falakus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl harl;

    if (ac != 2)
    {
        std::cout << "Error: wrong number of arguments" << std::endl;
        return (1);
    }

	harl.complain(av[1]);
	return (0);
}
