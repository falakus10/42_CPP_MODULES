/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falakus <falakus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 16:13:07 by falakus           #+#    #+#             */
/*   Updated: 2025/09/02 16:13:08 by falakus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int i = 0;
    Zombie zombie("zom");

    Zombie *horde = zombie.zombieHorde(5, "HordeZombie");
    while (i < 5)
    {
        horde[i].announce();
        i++;
    }
    delete[] horde;
    return 0;
}