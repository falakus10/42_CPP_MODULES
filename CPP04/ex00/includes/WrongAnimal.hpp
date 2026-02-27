#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(std::string _type);
		WrongAnimal(const WrongAnimal &next);
		WrongAnimal &operator=(const WrongAnimal &next);
		~WrongAnimal();
		void makeSound() const;
};

#endif