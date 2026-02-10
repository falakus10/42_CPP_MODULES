#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *cat_brain;
	public:
		Cat();
		Cat(std::string type);
		Cat(const Cat &next);
		Cat &operator=(const Cat &next);
		virtual ~Cat();
		void makeSound() const;
		std::string getIdea(int index) const;
		void setIdea(std::string ideas, int index);
};

#endif
