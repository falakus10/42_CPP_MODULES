#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	contacts[8];
		int		index;
		int		count;
	public:
		PhoneBook();
		~PhoneBook();
		void add_contact(void);
		void search_contact(void);

};

#endif