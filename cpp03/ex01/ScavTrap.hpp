#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		bool in_guard;
	public :
		ScavTrap();
		~ScavTrap();
		ScavTrap(const std::string name);
		ScavTrap& operator=(const ScavTrap &copy);
		void attack(const std::string& target);
		void guardGate();
};

#endif