#include "Character.hpp"

Character::Character() : floor(NULL)
{
	name = "Default";
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	std::cout << "default constructor for Character called" << std::endl;
}

Character::Character(std::string const &name) : floor(NULL)
{
	this->name = name;
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	std::cout << "parameterized constructor for Character called" << std::endl;
}

Character::Character(const Character &copy) : floor(NULL)
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	*this = copy;
	std::cout << "copy constructor for Character called" << std::endl;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete inventory[i];
	Floor *current = floor;
	while (current)
	{
		Floor *next = current->next;
		delete current->m;
		delete current;
		current = next;
	}
	std::cout << "destructor for Character called" << std::endl;
}

Character &Character::operator=(const Character &copy)
{
	if (this == &copy)
		return *this;

	name = copy.name;
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i])
			delete inventory[i];
		if (copy.inventory[i])
			inventory[i] = copy.inventory[i]->clone();
		else
			inventory[i] = NULL;
	}
	Floor *current = floor;
	while (current)
	{
		Floor *next = current->next;
		delete current->m;
		delete current;
		current = next;
	}
	floor = NULL;
	return *this;
}

std::string const &Character::getName() const
{
	return name;
}

void Character::equip(AMateria *m)
{
	if (!m)
		return;

	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] == m)
		{
			std::cout << "That Materia is already equipped" << std::endl;
			return;
		}
	}
	for (int i = 0; i < 4; i++)
	{
		if (!inventory[i])
		{
			inventory[i] = m;
			std::cout << "Materia equipped at index " << i << std::endl;
			return;
		}
	}
	std::cout << "No empty slot found" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3 || !inventory[idx])
		return;

	Floor *node	   = new Floor(inventory[idx]);
	node->next	   = floor;
	floor		   = node;
	inventory[idx] = NULL;

	std::cout << "Materia at index " << idx << " unequiped" << std::endl;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3)
		return;
	if (inventory[idx])
		inventory[idx]->use(target);
}
