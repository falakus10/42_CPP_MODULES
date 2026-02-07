#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    private:
        int guard_gate;
	public:
		ScavTrap();
		ScavTrap(std::string name);
        ScavTrap(const ScavTrap &next);
        ScavTrap &operator=(const ScavTrap &next);
        virtual ~ScavTrap();
        void attack(const std::string& target);
        void guardGate();
};

#endif