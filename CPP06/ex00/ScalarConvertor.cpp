#include "ScalarConvertor.hpp"

ScalarConvertor::ScalarConvertor(){}


ScalarConvertor::ScalarConvertor(const ScalarConvertor &other)
{
	(void)other;
}

ScalarConvertor::~ScalarConvertor() {}

ScalarConvertor &ScalarConvertor::operator=(const ScalarConvertor &other)
{
	(void)other;
	return *this;
}

int ScalarConvertor::get_type(std::string str)
{
	if (str[0] == '-' || str[0] == '+')
}

