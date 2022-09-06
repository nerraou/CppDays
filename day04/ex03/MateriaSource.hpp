#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
    AMateria *inventory[4];

public:
    MateriaSource();
    MateriaSource(const MateriaSource &other);
    MateriaSource &operator=(MateriaSource const &other);
    void learnMateria(AMateria *);
    AMateria *createMateria(std::string const &type);
    ~MateriaSource();
};
