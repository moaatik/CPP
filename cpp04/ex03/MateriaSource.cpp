#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		templates[i] = NULL;
	std::cout << "default constructor for MateriaSource called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	for (int i = 0; i < 4; i++)
		templates[i] = NULL;
	*this = copy;
	std::cout << "copy constructor for MateriaSource called" << std::endl;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete templates[i];
	std::cout << "destructor for MateriaSource called" << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copy)
{
	if (this == &copy)
		return *this;
	for (int i = 0; i < 4; i++)
	{
		if (this->templates[i])
			delete templates[i];
		if (!copy.templates[i])
			templates[i] = NULL;
		else
			this->templates[i] = copy.templates[i]->clone();
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!templates[i])
		{
			templates[i] = m->clone();
			delete m;
			std::cout << "Materia learned at index " << i << std::endl;
			return;
		}
	}
	delete m;
	std::cout << "No empty slot found for Materia " << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (templates[i] && type == templates[i]->getType())
			return templates[i]->clone();
	}
	std::cout << "No Materia found" << std::endl;
	return NULL;
}
