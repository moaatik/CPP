#include <fstream>
#include <iostream>
#include <string>

void SearchAndReplace(std::string &s1, std::string &s2, std::ifstream &infile,
					  std::ofstream &outfile)
{
	std::string line;

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
			outfile << std::endl;
	}
}

int main(int ac, char **av)
{
	if (ac != 4)
		return (std::cerr << "Error: Invalid Input" << std::endl, 1);

	std::string filename = av[1];
	std::string s1		 = av[2];
	std::string s2		 = av[3];

	if (s1.empty())
		return (std::cerr << "Error: s1 cannot be empty." << std::endl, 1);

	std::ifstream infile;
	std::ofstream outfile;

	infile.open(filename.c_str());
	if (!infile.is_open())
		return (std::cerr << "Failed to open infile" << std::endl, 1);

	filename += ".replace";
	outfile.open(filename.c_str());
	if (!outfile.is_open())
		return (infile.close(),
				std::cerr << "Failed to open outfile" << std::endl, 1);

	SearchAndReplace(s1, s2, infile, outfile);

	infile.close();
	outfile.close();
	return 0;
}
