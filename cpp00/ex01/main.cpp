#include "phonebook.hpp"

int main()
{
	PhoneBook	phonebook;

	while (1)
	{
		std::string input;
		std::cout << "Enter a command (ADD, SEARCH or EXIT)" << std::endl;
		if (!getline(std::cin, input) || input == "EXIT")
			break ;
		else if (input == "ADD")
			phonebook.add_contact();
		else if (input == "SEARCH")
			phonebook.search_contact();
	}
	return (0);
}
