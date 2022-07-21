#include <iostream>
#include <cctype>

void printToUpper(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		std::cout << (char)toupper(str[i]);
		i++;
	}
}

int main(int ac, char *av[])
{
	int i;

	i = 1;
	if (ac > 1)
	{
		while (av[i])
		{
			printToUpper(av[i]);
			i++;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

	std::cout << std::endl;
	return 0;
}