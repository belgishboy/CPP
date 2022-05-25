# include "Zombie.h"

void randomChump( std::string name )
{
	Zombie chump;

	chump.set_name(name);
	chump.announce();

	return ;
}
