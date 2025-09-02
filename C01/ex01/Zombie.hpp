/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falakus <falakus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 16:13:15 by falakus           #+#    #+#             */
/*   Updated: 2025/09/02 16:13:16 by falakus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Zombie
{
    private:
        std::string name;
        int n;
    
    public:
        Zombie();
        Zombie(std::string name);
        ~Zombie();
        void announce() const;
        Zombie *zombieHorde(int N, std::string name);
};