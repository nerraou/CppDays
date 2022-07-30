#include "Zombie.hpp"

int main()
{
	Zombie *zombie;
	int n_zombie;
	int i;
	std::string zombieName;

	std::cout << "enter the zombie name: \n";
	std::cin >> zombieName;
	std::cout << "enter the number of zombies: \n";
	std::cin >> n_zombie;
	zombie = zombieHorde(n_zombie, zombieName);
	for (i = 0; i < n_zombie; i++)
	{
		zombie[i].announce();
	}
	delete[] zombie;
	return 0;
}
