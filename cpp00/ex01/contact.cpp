#include "contact.hpp"

int	isPrintable(std::string input)
{
	for (int i = 0; input[i] ; i++)
	{
		if (!isprint(input[i]))
		{
			std::cerr << "Invalid Input" << std::endl;
			return (0);
		}
	}
	return (1);
}

void	Contact::set_contact(int contact_index)
{
	first_name.clear();
	last_name.clear();
	nick_name.clear();
	phone_number.clear();
	darkest_secret.clear();

	while (first_name.empty())
	{
		std::cout << "Enter First Name" << std::endl;
		getline(std::cin, first_name);
		if (!isPrintable(first_name))
			first_name.clear();
	}
	while (last_name.empty())
	{
		std::cout << "Enter Last Name" << std::endl;
		getline(std::cin, last_name);
		if (!isPrintable(last_name))
			last_name.clear();
	}
	while (nick_name.empty())
	{
		std::cout << "Enter Nick Name" << std::endl;
		getline(std::cin, nick_name);
		if (!isPrintable(nick_name))
			nick_name.clear();
	}
	while (phone_number.empty())
	{
		std::cout << "Enter Phone Number" << std::endl;
		getline(std::cin, phone_number);
		if (!isPrintable(phone_number))
			phone_number.clear();
	}
	while (darkest_secret.empty())
	{
		std::cout << "Enter the Dark Secret" << std::endl;
		getline(std::cin, darkest_secret);
		if (!isPrintable(darkest_secret))
			darkest_secret.clear();
	}
	index = contact_index;
}

void	Contact::print_search_format()
{
	if (first_name.empty())
		return ;

	std::string elements[] = {first_name, last_name, nick_name};
	std::cout<<"|";
	std::cout << std::setw(10) << index;
	for (int i = 0; i < 3; i++)
	{
		std::cout<<"|";
		if (elements[i].length() > 10)
			std::cout << elements[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << elements[i];
	}
	std::cout<<"|"<<std::endl;
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
