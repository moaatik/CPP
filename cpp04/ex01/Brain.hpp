#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
  private:
	std::string ideas[100];

  public:
	Brain();
	Brain(const Brain &copy);
	virtual ~Brain();
	Brain		&operator=(const Brain &copy);
};

#endif
