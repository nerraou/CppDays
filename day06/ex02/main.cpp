#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <iostream>
#include <cstdlib>
#include <ctime>

Base *generate(void)
{
	int var = rand() % 3;
	if (var == 0)
	{
		std::cout << "generated A random. " << std::endl;
		return static_cast<Base *>(new A());
	}

	else if (var == 1)
	{
		std::cout << "generated B random. " << std::endl;
		return static_cast<Base *>(new B());
	}
	else
		std::cout << "generated C random. " << std::endl;
	return static_cast<Base *>(new C());
}

void identify(Base *p)
{
	if (dynamic_cast<A *>(p) != NULL)
	{
		std::cout << "it's an A. " << std::endl;
	}
	else if (dynamic_cast<B *>(p) != NULL)
	{
		std::cout << "it's an B. " << std::endl;
	}
	else if (dynamic_cast<C *>(p) != NULL)
	{
		std::cout << "it's an C. " << std::endl;
	}
}

void identify(Base &p)
{
	try
	{
		(void)dynamic_cast<A &>(p);
		std::cout << "it's an A. " << std::endl;
		return;
	}
	catch (const std::bad_cast &e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		(void)dynamic_cast<B &>(p);
		std::cout << "it's an B. " << std::endl;
		return;
	}
	catch (const std::bad_cast &e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		(void)dynamic_cast<C &>(p);
		std::cout << "it's an B. " << std::endl;
		return;
	}
	catch (const std::bad_cast &e)
	{
		std::cerr << e.what() << '\n';
	}
}
int main()
{
	srand(time(0));

	Base *base = generate();
	identify(base);
	identify(base);

	delete base;
	return 0;
}