#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for(int i = 0; i < 4; i++)
        array[i] = nullptr;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
    *this = src;
}

MateriaSource& MateriaSource::operator=(MateriaSource const &src)
{
    if(this != &src)
    {
        for(int i = 0; i < 4; i++)
        {
            if (array[i])
                delete array[i];
            array[i] = src.array[i]->clone();
        }
    }
    return (*this);
}

MateriaSource::~MateriaSource()
{
    for(int i = 0; i < 4; i++)
    {
        if(array[i])
            delete array[i];
    }
}

void MateriaSource::learnMateria(AMateria* _materia)
{
    for(int i = 0; i < 4; i++)
    {
        if (array[i] == nullptr)
        {
            array[i] = _materia;
            break ;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for(int i = 0; i < 4; i++)
    {
        if (array[i] != nullptr && array[i]->getType() == type) 
                return(array[i]->clone());
    }
    return (0);
}