#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{
	if (ac != 4)
		return (std::cerr << "Error: Invalid Input" << std::endl, 1);

	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];

	if (s1.empty() || s2.empty())
		return (std::cerr << "Error: s1 and s2 cannot be empty." << std::endl, 1);

	std::ifstream infile;
	std::ofstream outfile;

	std::string line;

	infile.open(filename);
	if (!infile.is_open()) return (std::cerr << "Failed to open infile" << std::endl, 1);

	filename += ".replace";
	outfile.open(filename);
	if (!outfile.is_open()) return (infile.close(), std::cerr << "Failed to open outfile" << std::endl, 1);

	while (std::getline(infile, line))
	{
		size_t pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		outfile << line;
		if (!infile.eof())
			outfile << '\n';
	}
	infile.close();
	outfile.close();
	return 0;
}
