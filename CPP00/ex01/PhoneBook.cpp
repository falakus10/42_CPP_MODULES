/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falakus <falakus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 16:12:18 by falakus           #+#    #+#             */
/*   Updated: 2025/12/21 19:07:46 by falakus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->index = 0;
	this->count = 0;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Exit" << std::endl;
}

int	check_argument(std::string input, char argument_type)
{
	int	i = 0;
	int error = 1;
	
	if (argument_type == 'F' || argument_type == 'L')
	{
		while (input[i])
		{
			if (((input[i] >= 'a' && input[i] <= 'z') || (input[i] >= 'A' && input[i] <= 'Z')))
				error = 0;
			else
			{
				error = 1;
				break;
			}
			i++;
		}
	}
	if (argument_type == 'N' || argument_type == 'D')
	{
		while (input[i])
		{
			if (input[i] > 32 && input[i] < 127)
				error = 0;
			else
			{
				error = 1;
				break;
			}
			i++;
		}
	}
	if (argument_type == 'P')
	{
		while (input[i])
		{
			if (input[i] >= '0' && input[i] <= '9')
				error = 0;
			else
			{
				error = 1;
				break;
			}
			i++;
		}
	}
	return (error);
}


void PhoneBook::add_contact(void)
{
	std::string	input;

	std::cout << "Enter first name: " << std::endl;
	while (1)
	{
		if (!getline(std::cin, input))
			exit(1);
		if(check_argument(input, 'F'))
		{
			std::cout << "Invalid name. Please enter again." <<std:: endl;
			std::cout << "Enter first name: " << std::endl;
		}
		else
		{
			contacts[index].set_first_name(input);
			break;
		}
	}
	std::cout << "Enter last name: " << std::endl;
	while (1)
	{
		if (!getline(std::cin, input))
			exit(1);
		if(check_argument(input, 'L'))
		{
			std::cout << "Invalid last name. Please enter again." <<std:: endl;
			std::cout << "Enter last name: " << std::endl;
		}
		else
		{
			contacts[index].set_last_name(input);
			break;
		}
	}
	std::cout << "Enter nickname: " << std::endl;
	while (1)
	{
		if (!getline(std::cin, input))
			exit(1);
		if(check_argument(input, 'N'))
		{
			std::cout << "Invalid nick name. Please enter again." <<std:: endl;
			std::cout << "Enter nickname: " << std::endl;
		}
		else
		{
			contacts[index].set_nick_name(input);
			break;
		}
	}
	std::cout << "Enter phone number: " << std::endl;
	while (1)
	{
		if (!getline(std::cin, input))
			exit(1);
		if(check_argument(input, 'P'))
		{
			std::cout << "Invalid phone number. Please enter again." <<std:: endl;
			std::cout << "Enter phone number: " << std::endl;
		}
		else
		{
			contacts[index].set_phone_number(input);
			break;
		}
	}
	std::cout << "Enter darkest secret: " << std::endl;
	while (1)
	{
		if (!getline(std::cin, input))
			exit(1);
		if(check_argument(input, 'D'))
		{
			std::cout << "Invalid darkest secret. Please enter again." <<std:: endl;
			std::cout << "Enter darkest secret: " << std::endl;
		}
		else
		{
			contacts[index].set_darkest_secret(input);
			break;
		}
	}
	index = (index + 1) % 8;
	count++;
}

void PhoneBook::search_contact(void)
{
	int	i;
	int contact_cnt;
	std::string input;
	int index;

	i = 0;
	if (this->count == 0)
	{
		std::cout <<"No contacts available." <<std::endl;
		return ;
	}
	else if (this->count < 8)
		contact_cnt = this->index;
	else
		contact_cnt = 8;
	
	std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
	while (i < contact_cnt)
	{
		contacts[i].print_contact(i);
		i++;
	}
	std::cout << "Enter index to view details: " << std::endl;
	if (!getline(std::cin, input))
		exit(1);
	index = input[0] - '0';
	while (!(input.length() == 1 && isdigit(input[0]) && (input[0] - '0') < contact_cnt))
	{
		std::cout << "Invalid index." << std::endl;
		std::cout << "Enter index to view details: " << std::endl;
		if (!getline(std::cin, input))
			break;
		index = input[0] - '0';
	}
	std::cout << "First Name: " << contacts[index].get_first_name() << std::endl;
	std::cout << "Last Name: " << contacts[index].get_last_name() << std::endl;
	std::cout << "Nickname: " << contacts[index].get_nickname() << std::endl;
	std::cout << "Phone Number: " << contacts[index].get_phone_number() << std::endl;
	std::cout << "Darkest Secret: " << contacts[index].get_darkest_secret() << std::endl;
}