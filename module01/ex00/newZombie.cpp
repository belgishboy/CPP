
# include "Zombie.h"

Zombie* newZombie ( std::string name )
{
	Zombie *newZombie;

	newZombie->set_name(name);

	return (newZombie);
}