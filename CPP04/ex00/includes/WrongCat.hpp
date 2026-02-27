#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(std::string type);
		WrongCat(const WrongCat &next);
		WrongCat &operator=(const WrongCat &next);
		~WrongCat();
		void makeSound() const;
};

#endif
