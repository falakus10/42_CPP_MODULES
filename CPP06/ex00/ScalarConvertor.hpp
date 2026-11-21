#ifndef SCALARCONVERTOR_HPP
#define SCALARCONVERTOR_HPP

#include <iostream>
#include <string>	
#include <iomanip>
#include <limits>
#include <cmath>

class ScalarConvertor
{
	private:
	public:
		ScalarConvertor();
		ScalarConvertor(const ScalarConvertor &other);
		~ScalarConvertor();
		ScalarConvertor &operator=(const ScalarConvertor &other);

		void convert(std::string str);
		int get_type(std::string str);
		void print_char(std::string str);
		void print_int(std::string str);
		void print_float(std::string str);
		void print_double(std::string str);
		void print_pseudo_literal(std::string str);

};