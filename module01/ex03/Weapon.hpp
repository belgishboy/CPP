
#ifndef Weapon_HPP
# define Weapon_HPP

# include "Weapon.h"

class Weapon
{
	public :
		Weapon ( void );
		~Weapon ( void );

	private :
		std::string type;
		&std::string	getType( void );
		void setType( std:: string type );
};

#endif