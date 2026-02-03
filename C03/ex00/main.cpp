#include "ClapTrap.hpp"

int main()
{
	ClapTrap  c1("Taha");
	ClapTrap  c2("Ferhat");

	c1.attack("Ferhat");
	c2.attack("Taha");

	c1.takeDamage(10);
	c2.beRepaired(10);

	return (0);
}