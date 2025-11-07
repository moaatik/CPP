#include <iostream>

int	main(int argc, char **argv)
{
	if (argc <= 1)
		return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 0);
	for (int  i = 1; i < argc; i++)
	{
		std::string temp = argv[i];
		for (size_t j = 0; j < temp.length(); j++)
			temp[j] = std::toupper(temp[j]);
		std::cout << temp;
	}
	std::cout << std::endl;
}
