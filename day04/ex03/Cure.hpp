#pragma once

#include <iostream>
#include "AMateria.hpp"
class Cure : public AMateria
{
public:
    Cure();
    Cure(const Cure &other);
    Cure &operator=(Cure const &other);
    AMateria *clone() const;
    void use(ICharacter &target);
    ~Cure();
};
