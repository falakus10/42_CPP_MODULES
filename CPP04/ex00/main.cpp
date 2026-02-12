#include "includes/Cat.hpp"
#include "includes/Dog.hpp"
#include "includes/WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();


	const WrongAnimal *wrong_meta = new WrongAnimal();
	const WrongAnimal *k = new WrongCat();
	(void)wrong_meta;
	k->makeSound();
	delete meta;
	delete j;
	delete i;
	delete wrong_meta;
	delete k;
	return (0);
}
