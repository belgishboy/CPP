
#ifndef ClapTrap_HPP
# define ClapTrap_HPP

//LIBRARIES

# include <iostream>
# include <cmath>
# include <cstdlib>
# include <fstream>

// CLASS

class ClapTrap
{
	public :
		ClapTrap (void);
		ClapTrap ( std::string const name);
		ClapTrap (ClapTrap const & src);
		~ClapTrap (void);

		ClapTrap & operator=(ClapTrap const & rhs);

		bool operator==(ClapTrap const & rhs) const;

		std::string getName (void) const;
		int getHP (void) const;
		int getEP (void) const;
		int getATT (void) const;

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	private :
		std::string _name;//Name
		int	_hp;//Health Points
		int	_ep;//Energy Points
		int	_att;//Attack

};

std::ostream & operator<<(std::ostream & o, ClapTrap const & i);
#endif
