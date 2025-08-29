#include "Zombie.hpp"

int main()
{
    Zombie z("Zed");
    Zombie *zombie1 = z.newZombie("HeapZombie");
    zombie1->announce();
    delete zombie1;

    Zombie zombie2("StackZombie");
    zombie2.randomChump("Frank");
    return 0;
}