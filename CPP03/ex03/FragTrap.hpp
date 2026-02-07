#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    private:
        int guard_gate;
	public:
		FragTrap();
		FragTrap(std::string name);
        FragTrap(const FragTrap &next);
        FragTrap &operator=(const FragTrap &next);
        virtual ~FragTrap();
		void highFivesGuys(void);
};

#endif