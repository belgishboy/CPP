
#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include "HumanA.h"

class HumanA
{
	public :
		HumanA ( std::string, Weapon &new_weapon );
		~HumanA ( void );
		void attack (void);

	private :
		std::string name;
		Weapon *weapon;
};

#endif
