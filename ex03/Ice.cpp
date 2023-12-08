#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){
}
AMateria* Ice::clone()const{
	return new Ice(*this);
}
Ice::~Ice(){
}