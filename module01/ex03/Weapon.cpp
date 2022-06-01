
#include "Weapon.h"

Weapon::Weapon ( void )
{
	std::cout << std::endl << "Weapon None Created" << std::endl;
	return ;
}

Weapon::Weapon (std::string type)
{
	this->type = type;
	std::cout << std::endl << "Weapon " << this->type << " Created" << std::endl;
	return ;
}

std::string const & Weapon::getType( void )
{
	return (this->type);
}

void Weapon::setType( std::string type )
{
	this->type = type;
	return ;
}

Weapon::~Weapon (void)
{
	std::cout << std::endl << "Weapon " << this->type << " Destroyed" << std::endl;
	return ;
}
