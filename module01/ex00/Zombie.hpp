
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include "Zombie.h"

class Zombie
{
	public:
		Zombie (void);
		~Zombie (void);
		void announce( void );
		void set_name( std::string new_name);
	
	private:
		std::string	name;
};

#endif