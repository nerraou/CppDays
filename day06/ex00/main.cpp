#include <iostream>
#include <typeinfo>
#include "Convert.hpp"

int main(int ac, char *av[])
{
	if (ac == 2)
	{
		Convert conv(av[1]);
		try
		{
			char e = static_cast<char>(conv);
			if (isprint(e))
				std::cout << e << std::endl;
			else
				std::cout << "char: Non displayable" << std::endl;

			float a = static_cast<float>(conv);
			std::cout << a << "f" << std::endl;
			double b = static_cast<double>(conv);
			std::cout << b << std::endl;
			int c = static_cast<int>(conv);
			std::cout << c << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	return 0;
}