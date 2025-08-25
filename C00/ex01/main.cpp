#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook phonebook;
	std::string input;

	while (1)
	{
		std::cout << "Enter a command (ADD, SEARCH, EXIT): " << std::endl;
		std::cin >> input;
		if (input == "ADD")
			phonebook.add_contact();
		else if (input == "SEARCH")
			phonebook.search_contact();
		else if (input == "EXIT")
			break;
		else
			std::cout << "Invalid command. Please try again." << std::endl;
	}
	return (0);
}