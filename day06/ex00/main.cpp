#include <iostream>
#include <typeinfo>
#include <iomanip>
#include "Convert.hpp"

int main(int ac, char *av[])
{
	if (ac == 2)
	{
		Convert conv(av[1]);
		try
		{
			std::cout << std::fixed << std::setprecision(1);
			char e = static_cast<char>(conv);
			if (conv._impossible == true)
				std::cout << "char: impossible" << std::endl;
			else if (isprint(e))
				std::cout << "char: "
						  << "\'" << e << "\'" << std::endl;
			else
				std::cout << "char: Non displayable" << std::endl;
			int c = static_cast<int>(conv);
			if (conv._impossible == true)
				std::cout << "int: impossible" << std::endl;
			else
				std::cout << "int: " << c << std::endl;
			float a = static_cast<float>(conv);
			std::cout << "float: " << a << "f" << std::endl;

			double b = static_cast<double>(conv);
			std::cout << "double: " << b << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	return 0;
}