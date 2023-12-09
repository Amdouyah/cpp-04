#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource{
	public:
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

#endif