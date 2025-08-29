#include "Zombie.hpp"

int main()
{
    int i = 0;
    Zombie zombie("zom");

    Zombie *horde = zombie.zombieHorde(5, "HordeZombie");
    while (i < 5)
    {
        horde[i].announce();
        i++;
    }
    delete[] horde;
    return 0;
}