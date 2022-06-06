
#include "ScavTrap.hpp"

/**
 * @brief Construct a new ScavTrap:: ScavTrap object
 * _name = Nobody; _hp = 100; _ep = 50; _att = 20
 */
ScavTrap::ScavTrap ( void )
{
	setHP(100);
	setEP(50);
	setATT(20);
	std::cout << std::endl << "Default ScavTrap Constructor for " << getName() << " called" << std::endl;
	return ;
}

/**
 * @brief Construct a new ScavTrap:: ScavTrap object with `name 
 * _name = name; _hp = 100; _ep = 50; _att = 20
 * @param name string to be given to _name
 */
ScavTrap::ScavTrap (std::string const name)
{
	setName(name);
	setHP(100);
	setEP(50);
	setATT(20);
	std::cout << std::endl << "Parametric ScavTrap Constructor for " << getName() << " called" << std::endl;
	return ;
}

/**
 * @brief Construct a new ScavTrap:: ScavTrap object as a copy of src
 * @param src instance to be copied
 */
ScavTrap::ScavTrap (ScavTrap const & src)
{
	std::cout << std::endl << "Copy ScavTrap Constructor called" << std::endl;
	*this = src;
	return ;
}

/**
 * @brief Destroy the ScavTrap:: ScavTrap object
 */
ScavTrap::~ScavTrap (void)
{
	std::cout << std::endl << "ScavTrap Destructor for " << getName() << " Called" << std::endl;
	return ;
}

//**CLASS SPECIFIC**//

/**
 * @brief instance 'attacks' `target
 * @param target name of the target
 */
void ScavTrap::attack(const std::string& target)
{
	if (this->getHP() <= 0)
		std::cout << "ScavTrap " << this->getName() << " is dead." << std::endl;
	else
	{
		if (this->getEP() > 0)
		{
			this->setEP(this->getEP() - 1);
			std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getATT() << " points of damage." << std::endl;
		}
		else
			std::cout << "ScavTrap " << this->getName() << " doesn't have enough EP." << std::endl;
	}

	return ;
}

/**
 * @brief Informs that it is now in Gate Keeper mode
 * 
 */
void ScavTrap::guardGate(void)
{
	if (this->getHP() <= 0)
		std::cout << "ScavTrap " << this->getName() << " is dead." << std::endl;
	else
		std::cout << "ScavTrap " << this->getName() << " is in Gate Keeper mode." << std::endl;

	return ;
}

/**
 * @brief Assigns the values of rhs to the instance
 * @param rhs values to be copied
 * @return [ScavTrap&] ref to the instance
 */
ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
	std::cout << std::endl << "ScavTrap Assignment operator called" << std::endl;

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
bool ScavTrap::operator==(ScavTrap const & rhs) const
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
std::ostream & operator<<(std::ostream & o, ScavTrap const & i)
{
	o << (ClapTrap)i << std::endl;
	return (o);
}
