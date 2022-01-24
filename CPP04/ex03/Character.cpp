#include "Character.hpp"

Character::Character()
{
    Name = "def_name";
    for(int i = 0; i < 4; i++)
        _materia[i] = 0;
}

Character::Character(std::string _name) : Name(_name)
{
  //  Name = _name;
    for(int i = 0; i < 4; i++)
        _materia[i] = nullptr;
}

Character::Character(Character const & src)
{
    *this = src;
}

Character::~Character()
{
    for(int i = 0; i < 4; i++)
    {
        if (_materia[i])
            delete _materia[i];
    }
}

Character& Character::operator=(Character const &src)
{
    if (this != &src)
    {
        for (int i = 0; i < 4; i++)
        {
            if (_materia[i])
                delete (_materia[i]);
            _materia[i] = src._materia[i]->clone();
        }
    }
    return(*this);
}

void Character::equip(AMateria *m)
{
    for(int i = 0; i < 4; i++)
    {
        if (!_materia[i])
        {
            _materia[i] = m;
            break ;
        }
    }
}

void Character::unequip(int idx)
{
    if (_materia[idx])
        _materia[idx] = NULL; 
}

std::string const& Character::getName() const
{
    return(Name);
}

void Character::use(int idx, ICharacter& target)
{
    if(_materia[idx])
        _materia[idx]->use(target);
}
