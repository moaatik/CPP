#include "phonebook.hpp"

void	PhoneBook::add_contact()
{
	static int	index = 0;

	if (index > 7)
		index = 0;
	contacts[index].set_contact(index);
	index++;
}

void	PhoneBook::search_contact()
{
	std::cout <<"|----------|----------|----------|----------|" << std::endl;
	std::cout <<"|     INDEX|FIRST NAME| LAST NAME| NICK NAME|" << std::endl;
	std::cout <<"|----------|----------|----------|----------|" << std::endl;
	for (int i = 0; i < 8; i++)
		contacts[i].print_search_format();
	std::cout <<"|----------|----------|----------|----------|" << std::endl;
	std::string index_string;
	std::cout << "Enter the index of the entry you want (0-7): " << std::endl;
	getline(std::cin, index_string);
	if (index_string.empty() || !isdigit(index_string[0]) || index_string.length() > 1 || index_string[0] - 48 > 7)
		return ((void)(std::cerr << "wrong input" << std::endl));

	contacts[index_string[0] - 48].print_full_format();
}
