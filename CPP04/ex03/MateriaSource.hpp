#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
    public:
        MateriaSource();
        ~MateriaSource();
        MateriaSource(MateriaSource const &src);
        MateriaSource& operator=(MateriaSource const &src);
        void learnMateria(AMateria* _materia);
        AMateria* createMateria(std::string const & type);
    private:
        AMateria *array[4];
};

#endif