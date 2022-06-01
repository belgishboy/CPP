
# include "Zombie.h"

Zombie* zombieHorde( int N, std::string name )
{
	int i = 0;

	Zombie *hoard = new Zombie[N];

	while (i < N)
	{
		(hoard + i)->set_name(name);
		(hoard + i)->announce();
		i ++;
	}

	return (hoard);
}
