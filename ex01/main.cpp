#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(){
	// const Animal* meta = new Animal();
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	Dog da;
	std::cout << da.getType() << std::endl;
	
	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound();  //will output the cat sound!
	// j->makeSound();
	// meta->makeSound();

	// delete i;
	// delete j;
	// delete meta;

	return 0;
}

