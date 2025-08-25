#include "Contact.hpp"

Contact::Contact()
{
	this->first_name = "";
	this->last_name = "";
	this->nickname = "";
	this->phone_number = "";
	this->darkest_secret = "";
}
Contact::~Contact() {}

void Contact::set_first_name(std::string str)
{
	this->first_name = str;
}

void Contact::set_last_name(std::string str)
{
	this->last_name = str;
}

void Contact::set_nickname(std::string str)
{
	this->nickname = str;
}
void Contact::set_phone_number(std::string str)
{
	this->phone_number = str;
}

void Contact::set_darkest_secret(std::string str)
{
	this->darkest_secret = str;
}

std::string	Contact::get_first_name(void)
{
	return (this->first_name);
}

std::string	Contact::get_last_name(void)
{
	return (this->last_name);
}

std::string	Contact::get_nickname(void)
{
	return (this->nickname);
}

std::string	Contact::get_phone_number(void)
{
	return (this->phone_number);
}

std::string	Contact::get_darkest_secret(void)
{
	return (this->darkest_secret);
}

std::string format_field(const std::string &str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}


void Contact::print_contact(int index)
{
    std::cout << std::setw(10) << index << " | ";
    std::cout << std::setw(10) << format_field(first_name) << " | ";
    std::cout << std::setw(10) << format_field(last_name) << " | ";
    std::cout << std::setw(10) << format_field(nickname) << std::endl;
}
