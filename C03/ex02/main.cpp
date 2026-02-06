#include "FragTrap.hpp"

int main()
{
	FragTrap  c1("Taha");
	FragTrap  c2("Ferhat");
	FragTrap c3;

	c1.attack("Ferhat");
	c2.attack("Taha");

	c3 = c1;
	c1.takeDamage(10);
	c2.beRepaired(10);
	c1.highFiveGuys();
	return (0);
}