#include "AMateria.hpp"

AMateria::AMateria(){
}
AMateria::~AMateria(){
}
AMateria &AMateria::operator=(const AMateria &copy){
	this->type = copy.type;
}
AMateria::AMateria(const AMateria &copy){
	*this = copy;
}
AMateria::AMateria(std::string const & type){
	this->type = type;
}
std::string const & AMateria::getType() const{
	return type;
}