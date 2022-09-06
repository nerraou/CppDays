#include "Character.hpp"

Character::Character()
{
    for (int i = 0; i < 4; i++)
    {
        this->inventory[i] = NULL;
    }
}

std::string const &Character::getName() const
{
    return (this->name);
}

Character::Character(std::string name)
{
    this->name = name;
}

Character::Character(const Character &other)
{
    *this = other;
}
Character &Character::operator=(Character const &other)
{
    this->name = other.name;
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

void Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i] == NULL)
            this->inventory[i] = m;
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx <= 3)
        this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx <= 3)
    {
        this->inventory[idx]->use(target);
    }
}
Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        delete this->inventory[i];
    }
}
