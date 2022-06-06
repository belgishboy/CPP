
#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

//INCLUDE

# include "Trap.h"

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

		//SETTERS
		void setName(std::string const name);
		void setHP(const int hp);
		void setEP(const int ep);
		void setATT(const int att);

		//GETTERS
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
