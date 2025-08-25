#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->index = 0;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Exit" << std::endl;
}

int is_valid_number(std::string str)
{
	int i = 0;
	while (str[i])
	{
		if (!isdigit(str[i]))
		{
			std::cout << "Invalid phone number. Please enter digits only:" << std::endl;
			return (1);
		}
		i++;
	}
	return (0);
}

void PhoneBook::add_contact(void)
{
	std::string input;

	std::cout << "Enter first name: " << std::endl;
	std::cin >> input;
	contacts[index].set_first_name(input);
	std::cout << "Enter last name: " << std::endl;
	std::cin >> input;
	contacts[index].set_last_name(input);
	std::cout << "Enter nickname: " << std::endl;
	std::cin >> input;
	contacts[index].set_nickname(input);
	std::cout << "Enter phone number: " << std::endl;
	std::cin >> input;
	while (is_valid_number(input))
		std::cin >> input;
	contacts[index].set_phone_number(input);
	std::cout << "Enter darkest secret: " << std::endl;
	std::cin >> input;
	contacts[index].set_darkest_secret(input);
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
	std::cout << "   Index   | First Name |  Last Name | Nickname  " << std::endl;
	std::cout << "-------------------------------------------" << std::endl;
	while (i < contact_cnt)
	{
		contacts[i].print_contact(i);
		i++;
	}
	std::cout << "Enter index to view details: " << std::endl;
	std::cin >> input;
	while (!(input.length() == 1 && isdigit(input[0]) && (input[0] - '0') < contact_cnt))
	{
		std::cout << "Invalid index." << std::endl;
		std::cout << "Enter index to view details: " << std::endl;
		std::cin >> input;
	}
	index = input[0] - '0';
	std::cout << "First Name: " << contacts[index].get_first_name() << std::endl;
	std::cout << "Last Name: " << contacts[index].get_last_name() << std::endl;
	std::cout << "Nickname: " << contacts[index].get_nickname() << std::endl;
	std::cout << "Phone Number: " << contacts[index].get_phone_number() << std::endl;
	std::cout << "Darkest Secret: " << contacts[index].get_darkest_secret() << std::endl;
}