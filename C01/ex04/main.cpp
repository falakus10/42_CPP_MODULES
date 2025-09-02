/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falakus <falakus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 16:13:59 by falakus           #+#    #+#             */
/*   Updated: 2025/09/02 16:14:00 by falakus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int main(int ac, char **av)
{
	std::string filename;
	std::string s1;
	std::string s2;
	if (ac != 4)
	{
		std::cout << "Invalid number of arguments." << std::endl;
		return (1);
	}
	filename = av[1];
	s1 = av[2];
	s2 = av[3];
	if (s1.empty() || s2.empty() || filename.empty())
	{
		std::cout << "Arguments cannot be empty." << std::endl;
		return (1);
	}
	std::ifstream infile(filename.c_str());
	if (!infile)
	{
		std::cout << "Error opening file." << std::endl;
		return (1);
	}
	std::ofstream outfile((filename + ".replace").c_str());
	if (!outfile)
	{
		std::cout << "Error creating output file." << std::endl;
		return (1);
	}
	std::string line;
	while (std::getline(infile, line))
	{
		int pos = 0;
		while ((pos = line.find(s1, pos)) != -1)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		outfile << line << std::endl;
	}
	infile.close();
	outfile.close();
	return (0);
}