#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iomanip>
#include <iostream>

class Contact
{
  private:
	int			index;
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string phone_number;
	std::string darkest_secret;

  public:
	Contact();
	~Contact();
	void set_contact(int index);
	void print_search_format();
	void print_full_format();
	int	 get_index();
};

#endif
