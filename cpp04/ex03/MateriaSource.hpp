#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
  private:
	AMateria *templates[4];

  public:
	MateriaSource();
	MateriaSource(const MateriaSource &copy);
	virtual ~MateriaSource();
	MateriaSource &operator=(const MateriaSource &copy);
	void		   learnMateria(AMateria *);
	AMateria	  *createMateria(std::string const &type);
};

#endif
