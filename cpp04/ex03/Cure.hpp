#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include <iostream>

class Cure : public AMateria
{
  public:
	Cure();
	Cure(std::string const &type);
	Cure(const Cure &copy);
	~Cure();
	Cure &operator=(const Cure &copy);
	std::string const &getType() const;
	AMateria  *clone() const;
	void	   use(ICharacter &target);
};

#endif
