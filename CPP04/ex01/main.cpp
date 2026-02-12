#include "includes/Cat.hpp"
#include "includes/Dog.hpp"
#include "includes/WrongCat.hpp"

int main()
{
    std::cout << BLUE << "Creating animals individually..." << RESET << std::endl;

    const Animal* a1 = new Dog();
    const Animal* a2 = new Dog();
    const Animal* a3 = new Cat();
    const Animal* a4 = new Cat();

    std::cout << "---------------------------------" << std::endl;

    std::cout << BLUE << "Testing polymorphic sounds..." << RESET << std::endl;

    a1->makeSound();
    a2->makeSound();
    a3->makeSound();
    a4->makeSound();
    std::cout << "---------------------------------" << std::endl;

    std::cout << BLUE << "Testing virtual destructors..." << RESET << std::endl;

    delete a1;
    delete a2;
    delete a3;
    delete a4;

    std::cout << "---------------------------------" << std::endl;

    std::cout << BLUE << "Dog deep copy (copy constructor test)" << RESET << std::endl;

    Dog originalDog;
    originalDog.setIdea("Guard the house!", 0);

    Dog copiedDog(originalDog);
    copiedDog.setIdea("Play in the park!", 0);

    std::cout << "Original Dog idea: " << originalDog.getIdea(0) << std::endl;
    std::cout << "Copied Dog idea:   " << copiedDog.getIdea(0) << std::endl;

    std::cout << "---------------------------------" << std::endl;

    std::cout << BLUE << "Cat deep copy (assignment operator test)" << RESET << std::endl;

    Cat originalCat;
    originalCat.setIdea("Sleep all day!", 0);

    Cat assignedCat;
    assignedCat = originalCat;
    assignedCat.setIdea("Scratch the sofa!", 0);

    std::cout << "Original Cat idea: " << originalCat.getIdea(0) << std::endl;
    std::cout << "Assigned Cat idea: " << assignedCat.getIdea(0) << std::endl;

    std::cout << "---------------------------------" << std::endl;

    std::cout << BLUE << "Wrong polymorphism test" << RESET << std::endl;

    WrongAnimal* wrong = new WrongCat();
    wrong->makeSound();
    delete wrong;

    std::cout << "---------------------------------" << std::endl;

    return 0;
}
