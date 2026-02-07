#include "ScavTrap.hpp"

int main()
{
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
}
	std::cout << "\n\n****************************************************" << std::endl;
	std::cout << "****************************************************" << std::endl;
	std::cout << "****************************************************\n\n" << std::endl;

{
	ScavTrap s0;
	ScavTrap s1("Lebron");
	ScavTrap s2 ("Dirk");

	ScavTrap s3(s0);
	s3 = s1;
	s1.attack("Dirk");
	s2.attack("Lebron");

	s1.takeDamage(10);
	s2.beRepaired(10);

	s1.guardGate();
	s2.guardGate();
	s1.guardGate();
}
	return (0);
}