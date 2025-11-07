#include "PhoneBook.hpp"

int main()
{
	PhoneBook phonebook;

	while (1)
	{
		std::string input;
		if (!std::cin.eof())
			std::cout << "Enter a command (ADD, SEARCH or EXIT)" << std::endl;
		getline(std::cin, input);
		if (std::cin.eof() || input == "EXIT")
			break;
		else if (input == "ADD")
			phonebook.add_contact();
		else if (input == "SEARCH")
			phonebook.search_contact();
	}
	return (0);
}
