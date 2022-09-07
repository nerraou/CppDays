#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(std::string const &type)
{
	this->type = type;
}

AMateria::AMateria(const AMateria &other)
{
	*this = other;
}
std::string AMateria::getType()
{
	return this->type;
}

void AMateria::use(ICharacter &target)
{
	(void)target;
}
AMateria &AMateria::operator=(AMateria const &other)
{
	// this->type = other.type;
	(void)other;
	return (*this);
}

AMateria::~AMateria()
{
}
