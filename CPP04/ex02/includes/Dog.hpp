#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *dog_brain;
	public:
		Dog();
		Dog(std::string type);
		Dog(const Dog &next);
		Dog &operator=(const Dog &next);
		virtual ~Dog();
		void makeSound() const;
		std::string getIdea(int index) const;
		void setIdea(std::string ideas, int index);
};

#endif
