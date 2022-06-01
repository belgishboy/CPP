
#ifndef Weapon_HPP
# define Weapon_HPP

# include "Weapon.h"

class Weapon
{
	public :
		Weapon ( std::string type );
		~Weapon ( void );
		std::string const & getType( void );
		void setType( std::string type );

	private :
		std::string type;
};

#endif