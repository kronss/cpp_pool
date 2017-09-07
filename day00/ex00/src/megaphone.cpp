#include <iostream>

char	*to_upper(char *str)
{
	register char *tmp = str;

	while (*tmp != '\0')
	{
		if ('a' <= *tmp && *tmp <= 'z')
			*tmp -= 32;
		++tmp;
	}
	return (str);
}


int main(int argc, char **argv)
{
	int	i = 1;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	while (i < argc)
	{
		std::cout << to_upper(argv[i]);
		++i;
	}
	std::cout << std::endl;
	return (0);
}

