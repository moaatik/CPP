#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>

class PhoneBook
{
  private:
	Contact contacts[8];

  public:
	PhoneBook();
	~PhoneBook();
	void add_contact();
	void search_contact();
};
#endif
