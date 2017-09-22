#include <iostream>
#include <fstream>


int usage(char *file)
{
	std::cout << "usage: " << file << ", \"string 1\" , \"string 2\"" << std::endl;
	return (1);
}

int main(int argc, char **argv)
{
	if (argc != 4)
		return (usage(argv[0]));

	std::string fileName(argv[1]);
	std::string search(argv[2]);
	std::string replace(argv[3]);
	std::string text;
	std::string buffer;

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
	printf("%s\n", fileName.data());
	std::ofstream ofs((fileName.data()));
	if (!ofs)
	{
		std::cerr << "ERROR: can't create file" << std::endl;
		return (1);
	}

	while ( std::getline(ifs, buffer) )
	{
		text += buffer;
				
	}


	if (!ifs.eof())
		text += "\n";
	else
	{
		;
	}

	std::cout << text ;



	std::cout << search << std::endl;
	std::cout << "Hello, World!" << std::endl;
	return 0;
}
