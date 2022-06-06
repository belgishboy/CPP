
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

// INCLUDES

# include "Trap.h"

//CLASS

class FragTrap : public ClapTrap
{
	public :
		FragTrap (void);							//CANONICAL: Default Constructor
		FragTrap (std::string const name);
		FragTrap (FragTrap const & src);			//CANONICAL: Constructor by copy
		~FragTrap (void);							//CANONICAL: Default Destructor

		FragTrap & operator=(FragTrap const & rhs);	//CANONICAL: To assign the values of one class to another
		bool operator==(FragTrap const & rhs) const;

		//CLASS SPECIFIC
		void attack(const std::string& target);
		void guardGate(void);
};

std::ostream & operator<<(std::ostream & o, FragTrap const & i);
#endif
