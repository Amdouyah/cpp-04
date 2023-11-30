#include "Dog.hpp"

Dog::Dog()
{
	setType("Dog");
	std::cout << "Dog default Constructor Called" << std::endl;
}
Dog::~Dog(){
	std::cout << "Dog Destructor Called" << std::endl;
}

void Dog::makeSound()const
{
	std::cout << "haoww!" << std::endl;
}
