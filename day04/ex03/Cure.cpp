#include "Cure.hpp"

Cure::Cure()
{
	this->type = "cure";
}

Cure::Cure(const Cure &other) : AMateria(other)
{
	*this = other;
}

AMateria *Cure::clone() const
{
	Cure *cureMateria = new Cure(*this);
	return cureMateria;
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}
Cure &Cure::operator=(Cure const &other)
{
	(void)other;
	this->type = "cure";
	return (*this);
}
Cure::~Cure()
{
}
