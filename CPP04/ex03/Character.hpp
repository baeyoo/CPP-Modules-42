#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character: public ICharacter
{
    public:
        Character();
        Character(std::string _name);
        Character(Character const & src);
        ~Character();
        Character& operator=(Character const & src);
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
    private:
        std::string Name;
        AMateria *_materia[4];
};

#endif