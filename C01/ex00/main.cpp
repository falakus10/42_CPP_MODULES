/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falakus <falakus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 16:12:48 by falakus           #+#    #+#             */
/*   Updated: 2025/09/02 16:12:49 by falakus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie z("Zed");
    Zombie *zombie1 = z.newZombie("HeapZombie");
    zombie1->announce();
    delete zombie1;

    Zombie zombie2("StackZombie");
    zombie2.randomChump("Frank");
    return 0;
}