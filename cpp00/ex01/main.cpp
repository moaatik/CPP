#include "phonebook.hpp"

int main()
{
	PhoneBook	phonebook;

	while (1)
	{
		std::string input;
		getline(std::cin, input);;
		if (input == "ADD")
			phonebook.add_contact();
		else if (input == "SEARCH")
			phonebook.search_contact();
		else if (input == "EXIT")
			exit(0);
	}
	return (0);
}