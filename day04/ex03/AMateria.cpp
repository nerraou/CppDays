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
AMateria &AMateria::operator=(AMateria const &other)
{
    this->type = other.type;
    return (*this);
}

AMateria::~AMateria()
{
}
