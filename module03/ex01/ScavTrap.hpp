
#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

// INCLUDES

# include "ClapTrap.hpp"

//CLASS

class ScavTrap : public ClapTrap
{
	public :
		ScavTrap (void);							//CANONICAL: Default Constructor
		ScavTrap (int const n);
		ScavTrap (ScavTrap const & src);			//CANONICAL: Constructor by copy
		~ScavTrap (void);							//CANONICAL: Default Destructor

		ScavTrap & operator=(ScavTrap const & rhs);	//CANONICAL: To assign the values of one class to another

		bool operator==(ScavTrap const & rhs) const;

		int getFoo (void) const;

	private :
		int _foo;

};

std::ostream & operator<<(std::ostream & o, ScavTrap const & i);
#endif