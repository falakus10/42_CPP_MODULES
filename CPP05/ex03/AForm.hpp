#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string	form_name;
		bool				is_signed;
		const int			grade_to_sign;
		const int			grade_to_execute;
	public:
		AForm();
		AForm(std::string name, const int sign_grade, const int execute_grade);
		AForm(const AForm &next);
		AForm& operator=(const AForm &next);
		virtual ~AForm();
		std::string getName() const;
		bool is_it_signed() const;
		void beSigned(Bureaucrat &bureaucrat);
		int get_grade_to_sign() const;
		int get_grade_to_execute() const;
		virtual void execute(const Bureaucrat &bureaucrat) const = 0;

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class FormNotSignedException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

};

std::ostream &operator<<(std::ostream &os, AForm &next);

#endif