
#include "FragTrap.hpp"

/**
 * @brief Construct a new FragTrap:: FragTrap object
 * _name = Nobody; _hp = 100; _ep = 100; _att = 30
 */
FragTrap::FragTrap ( void )
{
	setHP(100);
	setEP(100);
	setATT(30);
	std::cout << std::endl << "Default FragTrap Constructor for " << getName() << " called" << std::endl;
	return ;
}

/**
 * @brief Construct a new FragTrap:: FragTrap object with `name 
 * _name = name; _hp = 100; _ep = 100; _att = 30
 * @param name string to be given to _name
 */
FragTrap::FragTrap (std::string const name)
{
	setName(name);
	setHP(100);
	setEP(100);
	setATT(30);
	std::cout << std::endl << "Parametric FragTrap Constructor for " << getName() << " called" << std::endl;
	return ;
}

/**
 * @brief Construct a new FragTrap:: FragTrap object as a copy of src
 * @param src instance to be copied
 */
FragTrap::FragTrap (FragTrap const & src)
{
	std::cout << std::endl << "Copy FragTrap Constructor called" << std::endl;
	*this = src;
	return ;
}

/**
 * @brief Destroy the FragTrap:: FragTrap object
 */
FragTrap::~FragTrap (void)
{
	std::cout << std::endl << "FragTrap Destructor for " << getName() << " Called" << std::endl;
	return ;
}

//**CLASS SPECIFIC**//

/**
 * @brief instance 'attacks' `target
 * @param target name of the target
 */
void FragTrap::attack(const std::string& target)
{
	if (this->getHP() <= 0)
		std::cout << "FragTrap " << this->getName() << " is dead." << std::endl;
	else
	{
		if (this->getEP() > 0)
		{
			this->setEP(this->getEP() - 1);
			std::cout << "FragTrap " << this->getName() << " attacks " << target << ", causing " << this->getATT() << " points of damage." << std::endl;
		}
		else
			std::cout << "FragTrap " << this->getName() << " doesn't have enough EP." << std::endl;
	}

	return ;
}

/**
 * @brief gives everyone high fives
 */
void FragTrap::highFivesGuys(void)
{
	if (this->getHP() <= 0)
		std::cout << "FragTrap " << this->getName() << " is dead." << std::endl;
	else
		std::cout << "FragTrap " << this->getName() << " is giving everyone high fives. WOOOO." << std::endl;

	return ;
}

/**
 * @brief Assigns the values of rhs to the instance
 * @param rhs values to be copied
 * @return [FragTrap&] ref to the instance
 */
FragTrap & FragTrap::operator=(FragTrap const & rhs)
{
	std::cout << std::endl << "FragTrap Assignment operator called" << std::endl;

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
 * @brief outputs the contents of `i` into o
 * @param o out stream
 * @param i instance that will be outputted
 * @return [std::ostream&] where to be outputted
 */
std::ostream & operator<<(std::ostream & o, FragTrap const & i)
{
	o << (ClapTrap)i << std::endl;
	return (o);
}
