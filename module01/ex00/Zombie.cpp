
# include "Zombie.h"

Zombie::Zombie( void)
{
	return ;
}

void Zombie::announce( void )
{
	std::cout << std::endl << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;

	return ;
}

void Zombie::set_name(std::string new_name)
{
	this->name = new_name;

	return ;
}

Zombie::~Zombie( void)
{
	std::cout << std::endl << this->name << " has been Destoryed." << std::endl;

	return ;
}