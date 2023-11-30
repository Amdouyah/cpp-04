#include "Cat.hpp"
Cat::Cat()
{
	setType("cat");
	std::cout << "Cat default Constructor Called" << std::endl;
}
Cat::~Cat(){
	std::cout << "Cat Destructor Called" << std::endl;
}

void Cat::makeSound()const
{
	std::cout << "Meao!" << std::endl;
}
