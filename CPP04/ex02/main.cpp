#include "includes/Cat.hpp"
#include "includes/Dog.hpp"
#include "includes/WrongCat.hpp"
#include <iostream>

int main()
{
    std::cout << BLUE << "Polymorphism test" << RESET << std::endl;

    const Animal* d1 = new Dog();
    const Animal* d2 = new Dog();
    const Animal* c1 = new Cat();
    const Animal* c2 = new Cat();

    d1->makeSound();
    d2->makeSound();
    c1->makeSound();
    c2->makeSound();

    delete d1;
    delete d2;
    delete c1;
    delete c2;

    std::cout << "---------------------------------" << std::endl;

    std::cout << BLUE << "Dog Deep Copy (Copy Constructor)" << RESET << std::endl;

    Dog dogA;
    dogA.setIdea("Steak", 0);

    Dog dogB = dogA;
    dogB.setIdea("Bones", 0);

    std::cout << dogA.getIdea(0) << std::endl;
    std::cout << dogB.getIdea(0) << std::endl;

    std::cout << "---------------------------------" << std::endl;

    std::cout << BLUE << "Cat Deep Copy (Assignment Operator)" << RESET << std::endl;

    Cat catA;
    catA.setIdea("Fish", 0);

    Cat catB;
    catB.setIdea("Temporary", 0);
    catB = catA;
    catB.setIdea("Milk", 0);

    std::cout << catA.getIdea(0) << std::endl;
    std::cout << catB.getIdea(0) << std::endl;

    std::cout << "---------------------------------" << std::endl;

    std::cout << BLUE << "Wrong Polymorphism Test" << RESET << std::endl;

    WrongAnimal* wrong = new WrongCat();
    wrong->makeSound();
    delete wrong;

    std::cout << "---------------------------------" << std::endl;

    return 0;
}
