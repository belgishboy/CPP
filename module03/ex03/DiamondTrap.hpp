
#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

// INCLUDES

# include "Trap.h"

//CLASS

class DiamondTrap : public ScavTrap, public FragTrap
{
	public :
		DiamondTrap (void);							//CANONICAL: Default Constructor
		DiamondTrap (std::string const newName);
		DiamondTrap (DiamondTrap const & src);			//CANONICAL: Constructor by copy
		~DiamondTrap (void);							//CANONICAL: Default Destructor

		DiamondTrap & operator=(DiamondTrap const & rhs);	//CANONICAL: To assign the values of one class to another

		//CLASS SPECIFIC
		using ScavTrap::attack;
		void whoAmI ();

	private :
		const std::string name;
};

std::ostream & operator<<(std::ostream & o, DiamondTrap const & i);
#endif
