#include "Form.hpp"

Form :: Form() : form_name("contract"), grade_to_sign(4), grade_to_execute(5)
{
	this->is_signed = false;
}

Form :: Form(std::string name, const int sign_grade, const int execute_grade)
				: form_name(name), grade_to_sign(sign_grade), grade_to_execute(execute_grade)
{
	this->is_signed = false;
}

