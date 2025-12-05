#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include <iostream>

class Ice : public AMateria
{
  public:
	Ice();
	Ice(std::string const &type);
	Ice(const Ice &copy);
	~Ice();
	Ice &operator=(const Ice &copy);
	std::string const &getType() const;
	AMateria  *clone() const;
	void	   use(ICharacter &target);
};

#endif
