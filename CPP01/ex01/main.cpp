/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falakus <falakus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 16:13:07 by falakus           #+#    #+#             */
/*   Updated: 2025/12/28 17:26:19 by falakus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int i = 0;
    Zombie zombie("zom");

    Zombie *horde = zombie.zombieHorde(7, "austunso");
    while (i < 7)
    {
        horde[i].announce();
        i++;
    }
    delete[] horde;
    return (0);
}