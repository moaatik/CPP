#include "contact.hpp"

void	Contact::set_contact(int contact_index)
{
	while (first_name.empty())
	{
		std::cout << "Enter First Name" << std::endl;
		getline(std::cin, first_name);
	}
	while (last_name.empty())
	{
		std::cout << "Enter Last Name" << std::endl;
		getline(std::cin, last_name);
	}
	while (nick_name.empty())
	{
		std::cout << "Enter Nick Name" << std::endl;
		getline(std::cin, nick_name);
	}
	while (phone_number.empty())
	{
		std::cout << "Enter Phone Number" << std::endl;
		getline(std::cin, phone_number);
	}
	while (darkest_secret.empty())
	{
		std::cout << "Enter the Dark Secret" << std::endl;
		getline(std::cin, darkest_secret);
	}
	index = std::to_string(contact_index);
}

void	Contact::print_search_format()
{
	std::string elements[] = {index, first_name, last_name, nick_name};
	for (int i = 0; i < 4; i++)
	{
		std::cout<<"|";
		if (elements[i].length() > 10)
			std::cout << elements[i].substr(0, 9) << ".";
		else
			std::cout << std::left << std::setw(10) << std::setfill('.') << elements[i];
	}
	std::cout<<"|";
}

void	Contact::print_full_format()
{
	std::cout << "index of the entry : " << index << std::endl;
	std::cout << "First Name of the entry : " << first_name << std::endl;
	std::cout << "Last Name of the entry : " << last_name << std::endl;
	std::cout << "Nick Name of the entry : " << nick_name << std::endl;
	std::cout << "Phone Number of the entry : " << phone_number << std::endl;
	std::cout << "Dark Secret of the entry : " << darkest_secret << std::endl;
}
