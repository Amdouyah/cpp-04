#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria{
	public :
		Ice();
		AMateria *clone()const;
		~Ice();

};

#endif