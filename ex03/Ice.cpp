#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){
}
AMateria* Ice::clone()const{
	return new Ice(*this);
}
Ice::~Ice(){
}
void Ice::use(ICharacter& target){
	std::cout <<"Ice: * heals " << target.getName() << std::endl;
}