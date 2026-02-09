#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(std::string type);
		Cat(const Cat &next);
		Cat &operator=(const Cat &next);
		virtual ~Cat();
		void makeSound() const;
};

#endif
