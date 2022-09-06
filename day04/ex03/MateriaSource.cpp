#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        this->inventory[i] = NULL;
    }
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
    *this = other;
}
MateriaSource &MateriaSource::operator=(MateriaSource const &other)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i])
            delete this->inventory[i];
        if (other.inventory[i] == NULL)
            this->inventory[i] = NULL;
        else
            this->inventory[i] = other.inventory[i]->clone();
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria *amateria)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i] == NULL)
            this->inventory[i] = amateria;
    }
}
AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i]->getType() == type)
            return this->inventory[i]->clone();
    }
    return 0;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        delete this->inventory[i];
    }
}
