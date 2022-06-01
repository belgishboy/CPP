
#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "HumanB.h"

class HumanB
{
	public :
		HumanB ( std::string );
		~HumanB ( void );
		void attack (void);
		void setWeapon (Weapon weapon);

	private :
		std::string name;
		class Weapon weapon;
};

#endif
