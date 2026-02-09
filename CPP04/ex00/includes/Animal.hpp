#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(std::string _type);
		Animal(const Animal &next);
		Animal &operator=(const Animal &next);
		virtual ~Animal();
		virtual void makeSound() const;
		std::string getType() const;
};

#endif