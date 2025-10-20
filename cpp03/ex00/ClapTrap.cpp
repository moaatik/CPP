#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name("default"), hit_points(10), energy_points(10), attack_damage(0)
{
	std::cout << "default constructor for " << name << " called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name): name(name), hit_points(10), energy_points(10), attack_damage(0)
{
	std::cout << "parameterized constructor for " << name << " called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	this->name = copy.name;
	this->hit_points = copy.hit_points;
	this->energy_points = copy.energy_points;
	this->attack_damage = copy.attack_damage;

	std::cout << "copy constructor for " << name << " called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &copy)
{
	this->name = copy.name;
	this->hit_points = copy.hit_points;
	this->energy_points = copy.energy_points;
	this->attack_damage = copy.attack_damage;

	std::cout << "Copy assignment operator for " << name << " called" << std::endl;
	return *this;
}

ClapTrap::~ClapTrap() {std::cout << "destructor for " << this->name << " called" << std::endl;}

void ClapTrap::attack(const std::string& target)
{
	if (hit_points <= 0)
		return (void)(std::cout << "ClapTrap " << this->name << " already dead!" << std::endl);
	if (energy_points <= 0)
		return (void)(std::cout << "ClapTrap " << this->name << " has no energy!" << std::endl);
	std::cout << "ClapTrap " << this->name << " attacks " << target << " causing " << this->attack_damage << " points of damage!" << std::endl;
	energy_points--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hit_points <= 0)
		return (void)(std::cout << "ClapTrap " << this->name << " already dead!" << std::endl);
	std::cout << "ClapTrap " << this->name << " took "  << amount << " points of damage!" << std::endl;
	hit_points-=amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hit_points <= 0)
		return (void)(std::cout << "ClapTrap " << this->name << " already dead!" << std::endl);
	if (energy_points <= 0)
		return (void)(std::cout << "ClapTrap " << this->name << " has no energy!" << std::endl);
	std::cout << "ClapTrap " << this->name << " regains "  << amount << " hit_points!" << std::endl;
	hit_points+=amount;
	energy_points--;
}
