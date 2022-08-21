#pragma once

#include <iostream>

class ClapTrap
{
protected:
	std::string name;
	int hitPoint;
	int energyPoint;
	int attackDamage;

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &other);
	std::string getName() const;
	ClapTrap &operator=(ClapTrap const &other);
	~ClapTrap();

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

std::ostream &operator<<(std::ostream &out, ClapTrap const &in);
