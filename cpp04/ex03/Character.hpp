#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

struct Floor
{
	AMateria *m;
	Floor	 *next;
	Floor(AMateria *materia) : m(materia), next(NULL)
	{
	}
};

class Character : public ICharacter
{
  private:
	AMateria   *inventory[4];
	Floor	   *floor;
	std::string name;

  public:
	Character();
	Character(std::string const &name);
	Character(const Character &copy);
	virtual ~Character();
	Character		  &operator=(const Character &copy);
	std::string const &getName() const;
	void			   equip(AMateria *m);
	void			   unequip(int idx);
	void			   use(int idx, ICharacter &target);
};

#endif
