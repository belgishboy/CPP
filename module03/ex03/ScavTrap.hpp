
#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

// INCLUDES

# include "Trap.h"

//CLASS

class ScavTrap : virtual public ClapTrap
{
	public :
		ScavTrap (void);							//CANONICAL: Default Constructor
		ScavTrap (std::string const name);
		ScavTrap (ScavTrap const & src);			//CANONICAL: Constructor by copy
		~ScavTrap (void);							//CANONICAL: Default Destructor

		ScavTrap & operator=(ScavTrap const & rhs);	//CANONICAL: To assign the values of one class to another

		//CLASS SPECIFIC
		void attack(const std::string& target);
		void guardGate(void);
};

std::ostream & operator<<(std::ostream & o, ScavTrap const & i);
#endif
