#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	protected:
		std::string ideas[100];
	public:
		Brain();
		Brain(const Brain &next);
		Brain &operator=(const Brain &next);
		virtual ~Brain();
		void setIdea(std::string ideas, int index);
		std::string getIdea(int index) const;
};

#endif