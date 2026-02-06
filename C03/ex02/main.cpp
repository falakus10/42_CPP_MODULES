#include "FragTrap.hpp"

int main()
{
	FragTrap  c1("Taha");
	FragTrap  c2("Ferhat");

	c1.attack("Ferhat");
	c2.attack("Taha");

	c1.takeDamage(10);
	c2.beRepaired(10);
	c1.highFivesGuys();
	return (0);
}