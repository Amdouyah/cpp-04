#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"


class Ice : public AMateria{
	public :
		Ice();
		AMateria *clone()const;
		void use(ICharacter& target);
		~Ice();

};

#endif