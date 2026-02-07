#include "ClapTrap.hpp"

int main()
{
	ClapTrap c0;
	ClapTrap  c1("Taha");
	ClapTrap  c2("Ferhat");

	ClapTrap c3(c0);
	c3 = c1;
	c1.attack("Ferhat");
	c2.attack("Taha");

	c1.takeDamage(10);
	c2.beRepaired(10);

	return (0);
}