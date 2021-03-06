#include "Dog.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    //...
    const WrongAnimal* meta_1 = new WrongCat();
    std::cout << meta_1->getType() << " " << std::endl;
    meta_1->makeSound();
    delete meta;
    delete j;
    delete i;
    delete meta_1;	
}