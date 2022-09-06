#pragma once

#include <iostream>
#include "AMateria.hpp"
class Ice : public AMateria
{
public:
    Ice();
    Ice(const Ice &other);
    Ice &operator=(Ice const &other);
    AMateria *clone() const;
    void use(ICharacter &target);
    ~Ice();
};
