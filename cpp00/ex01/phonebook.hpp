#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
	public:
		void	add_contact();
		void	search_contact();
};
#endif
