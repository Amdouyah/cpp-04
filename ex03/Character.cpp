#include "Character.hpp"

Character::Character(){
	index = 0;
	for (int i = 0; i < 4 ; i++){
		inventory[i] = NULL;
		tmp[i] = NULL;
	}
}
Character::~Character(){
}
Character::Character(std::string const &name) : name(name){
	for (int i = 0; i < 4 ; i++){
		inventory[i] = NULL;
		tmp[i] = NULL;
	}
}
Character::Character(const Character &copy) : name(copy.name){
	*this = copy;
}
Character &Character::operator=(const Character &copy){
	if (this != &copy){
		for (int i = 0; i < 4; i++){
			delete inventory[i];
			delete tmp[i];
		}
		name = copy.name;
		index = copy.index;
		for (int i = 0; i < 4; i++){
			if(copy.inventory[i])
				inventory[i] = copy.inventory[i]->clone();
			else
				inventory[i] = NULL;
			if (copy.tmp[i])
				tmp[i] = copy.tmp[i]->clone();
			else
				tmp[i] = NULL;

		}
	}
	return (*this);
}
std::string	const &Character::getName()const{
	return name;
}
void Character::equip(AMateria *m){
	if(index != 4){
		inventory[index] = m;
		index++;
	}
}

void Character::unequip(int idx){
	if (inventory[idx]){
		tmp[idx] = inventory[idx];
		inventory[idx] = NULL;
	}
}
void Character::use(int idx, ICharacter& target){
	if (idx <= index){
		inventory[idx]->use(target);
	}
}

Character::~Character(){
	for (int i = 0; i < 4; ++i){
        delete inventory[i];
    }
}