
#include "DiamondTrap.hpp"

/**
 * @brief Construct a new DiamondTrap:: DiamondTrap object
 * _name = Nobody; _hp = 100; _ep = 100; _att = 30
 */
DiamondTrap::DiamondTrap ( void )
{
	setHP(100);
	setEP(100);
	setATT(30);
	std::cout << std::endl << "Default DiamondTrap Constructor for " << getName() << " called" << std::endl;
	return ;
}

/**
 * @brief Construct a new DiamondTrap:: DiamondTrap object with `name 
 * _name = name; _hp = 100; _ep = 100; _att = 30
 * @param name string to be given to _name
 */
DiamondTrap::DiamondTrap (std::string const name)
{
	setName(name);
	setHP(100);
	setEP(100);
	setATT(30);
	std::cout << std::endl << "Parametric DiamondTrap Constructor for " << getName() << " called" << std::endl;
	return ;
}

/**
 * @brief Construct a new DiamondTrap:: DiamondTrap object as a copy of src
 * @param src instance to be copied
 */
DiamondTrap::DiamondTrap (DiamondTrap const & src)
{
	std::cout << std::endl << "Copy DiamondTrap Constructor called" << std::endl;
	*this = src;
	return ;
}

/**
 * @brief Destroy the DiamondTrap:: DiamondTrap object
 */
DiamondTrap::~DiamondTrap (void)
{
	std::cout << std::endl << "DiamondTrap Destructor for " << getName() << " Called" << std::endl;
	return ;
}

//**CLASS SPECIFIC**//

/**
 * @brief instance 'attacks' `target
 * @param target name of the target
 */
void DiamondTrap::attack(const std::string& target)
{
	if (this->getHP() <= 0)
		std::cout << "DiamondTrap " << this->getName() << " is dead." << std::endl;
	else
	{
		if (this->getEP() > 0)
		{
			this->setEP(this->getEP() - 1);
			std::cout << "DiamondTrap " << this->getName() << " attacks " << target << ", causing " << this->getATT() << " points of damage." << std::endl;
		}
		else
			std::cout << "DiamondTrap " << this->getName() << " doesn't have enough EP." << std::endl;
	}

	return ;
}

/**
 * @brief gives everyone high fives
 */
void DiamondTrap::highFivesGuys(void)
{
	if (this->getHP() <= 0)
		std::cout << "DiamondTrap " << this->getName() << " is dead." << std::endl;
	else
		std::cout << "DiamondTrap " << this->getName() << " is giving everyone high fives. WOOOO." << std::endl;

	return ;
}

/**
 * @brief Assigns the values of rhs to the instance
 * @param rhs values to be copied
 * @return [DiamondTrap&] ref to the instance
 */
DiamondTrap & DiamondTrap::operator=(DiamondTrap const & rhs)
{
	std::cout << std::endl << "DiamondTrap Assignment operator called" << std::endl;

	if (this != &rhs)
	{
		this->setName(rhs.getName());
		this->setHP(rhs.getHP());
		this->setEP(rhs.getEP());
		this->setATT(rhs.getATT());
	}

	return (*this);
}

/**
 * @brief checks if the values of two class instances are the same
 * 
 * @param rhs class instance being checked against
 * @return [true] if all members of each class are equal
 * @return [false] if not all members of each class are equal
 */
bool DiamondTrap::operator==(DiamondTrap const & rhs) const
{
	if (!((ClapTrap)*this == (ClapTrap)rhs))
		return (false);
	
	return (true);
}

/**
 * @brief outputs the contents of `i` into o
 * @param o out stream
 * @param i instance that will be outputted
 * @return [std::ostream&] where to be outputted
 */
std::ostream & operator<<(std::ostream & o, DiamondTrap const & i)
{
	o << (ClapTrap)i << std::endl;
	return (o);
}