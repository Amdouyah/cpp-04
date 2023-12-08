#include "Cure.hpp"

Cure::Cure() : AMateria("ice"){

}
AMateria* Cure::clone()const{
	return new Cure(*this);
}
Cure::~Cure(){
}

void Cure::use(ICharacter& target){
	std::cout <<"Cure: * heals " << target.getName() << std::endl;
}