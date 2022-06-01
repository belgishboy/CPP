
#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "HumanA.h"

class HumanA
{
	public :
		HumanA ( std::string, Weapon weapon );
		~HumanA ( void );
		void attack (void);

	private :
		std::string name;
		class Weapon weapon;
};

#endif
