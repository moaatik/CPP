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
	std::cout <<"|  INDEX   |FIRST NAME| LAST NAME| NICK NAME|" << std::endl;
	std::cout <<"|----------|----------|----------|----------|" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		contacts[i].print_search_format();
		std::cout<<std::endl;
	}
	std::cout <<"|----------|----------|----------|----------|" << std::endl;
	std::string index_string;
	std::cout << "Enter the index of the entry you want : " << std::endl;
	getline(std::cin, index_string);
	if (!index_string.empty() || !isdigit(index_string[0]))
		return ((void)(std::cerr << "wrong input : index out of range" << std::endl));
	int index = std::stoi(index_string); // this may cause alot of problems
	if (index <= 7 && index >= 0)
		contacts[index].print_full_format();
	else
		std::cerr << "wrong input : index out of range" << std::endl;
}
