#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP


#include <iostream>
#include <string.h>

class Bureaucrat
{
	private:
		const std::string 	_name;
		int					_grade;

	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &next);
		Bureaucrat &operator=(const Bureaucrat &next);
		~Bureaucrat();
		std::string getName();
		int getGrade();
		void setName(std::string name);
		void setGrade(int grade);
};


#endif