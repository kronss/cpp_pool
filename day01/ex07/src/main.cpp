#include <iostream>
#include <fstream>
#include <sstream>


int usage(char *file)
{
	std::cout << "usage: " << file << ", \"string 1\" , \"string 2\"" << std::endl;
	return (1);
}

std::string replaceString(std::string &search, std::string &replace, std::ifstream &ifs)
{
	std::stringstream ss;
	std::string buffer;
	size_t res = 0;
	ss << ifs.rdbuf();
	buffer = ss.str();
	if (search != replace)
	{
		while ((res = buffer.find(search)) != std::string::npos)
		{
			buffer.erase(res, search.length());
			buffer.insert(res, replace);
		}	
	}
	return (buffer);
}

int main(int argc, char **argv)
{
	if (argc != 4)
		return (usage(argv[0]));
	std::string fileName(argv[1]);
	std::string search(argv[2]);
	std::string replace(argv[3]);
	
	if (search.empty() || replace.empty())
	{
		std::cerr << "ERROR: empty string" << std::endl;
		return (1);
	}
	std::ifstream ifs(fileName.data());

	if (!ifs)
	{
		std::cerr << "ERROR: file not exist" << std::endl;
		return (1);
	}

	fileName = fileName + ".replace";
	std::ofstream ofs((fileName.data()));

	if (!ofs)
	{
		std::cerr << "ERROR: can't create file" << std::endl;
		return (1);
	}

	ofs << replaceString(search, replace, ifs);
	return 0;
}
