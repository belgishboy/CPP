
#include "ClapTrap.hpp"

/**
 * @brief Construct a new ClapTrap:: ClapTrap object
 * _name = Nobody; _hp = 10; _ep = 10; _att = 0
 */
ClapTrap::ClapTrap ( void ): _name("Nobody"), _hp(10), _ep(10), _att(0)
{
	std::cout << std::endl << "Default ClapTrap Constructor for " << _name << " called" << std::endl;
	return ;
}

/**
 * @brief Construct a new ClapTrap:: ClapTrap object with `name 
 * _name = name; _hp = 10; _ep = 10; _att = 0
 * @param name string to be given to _name
 */
ClapTrap::ClapTrap (std::string const name) : _name(name), _hp(10), _ep(10), _att(0)
{
	std::cout << std::endl << "Parametric ClapTrap Constructor for " << _name << " called" << std::endl;
	return ;
}

/**
 * @brief Construct a new ClapTrap:: ClapTrap object as a copy of src
 * @param src instance to be copied
 */
ClapTrap::ClapTrap (ClapTrap const & src)
{
	std::cout << std::endl << "Copy Constructor called" << std::endl;
	*this = src;
	return ;
}

/**
 * @brief Destroy the ClapTrap:: ClapTrap object
 */
ClapTrap::~ClapTrap (void)
{
	std::cout << std::endl << "ClapTrap Destructor for " << _name << " Called" << std::endl;
	return ;
}

//**SETTERS**//

/**
 * @brief Set the Name member
 * @param name [std::string const]
 */
void ClapTrap::setName(std::string const name)
{
	this->_name = name;

	return ;
}

/**
 * @brief Set the _hp member
 * @param hp [int]
 */
void ClapTrap::setHP(const int hp)
{
	this->_hp = hp;

	return ;
}

/**
 * @brief Set the _ep member
 * @param ep [int]
 */
void ClapTrap::setEP(const int ep)
{
	this->_ep = ep;

	return ;
}

/**
 * @brief Set the _att member
 * @param att[int] 
 */
void ClapTrap::setATT(const int att)
{
	this->_att = att;

	return ;
}


//**GETTERS**//

/**
 * @brief gets the _name of the instance
 * @return [std::string] 
 */
std::string ClapTrap::getName (void) const
{
	return (this->_name);
}

/**
 * @brief gets the _hp of the instance
 * @return [int] 
 */
int ClapTrap::getHP (void) const
{
	return (this->_hp);
}

/**
 * @brief gets the _ep of the instance
 * @return [int] 
 */
int ClapTrap::getEP (void) const
{
	return (this->_ep);
}

/**
 * @brief gets the _att of the instance
 * @return [int] 
 */
int ClapTrap::getATT (void) const
{
	return (this->_att);
}

/**
 * @brief Assigns the values of rhs to the instance
 * @param rhs values to be copied
 * @return [ClapTrap&] ref to the instance
 */
ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
	std::cout << std::endl << "Assignment operator called" << std::endl;

	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_hp = rhs.getHP();
		this->_ep = rhs.getEP();
		this->_att = rhs.getATT();
	}

	return (*this);
}

/**
 * @brief instance 'attacks' `target
 * @param target name of the target
 */
void ClapTrap::attack(const std::string& target)
{
	if (this->_hp <= 0)
		std::cout << "ClapTrap " << this->_name << " is dead." << std::endl;
	else
	{
		if (this->_ep > 0)
		{
			this->_ep -= 1;
			std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_att << " points of damage." << std::endl;
		}
		else
			std::cout << "ClapTrap " << this->_name << " doesn't have enough EP." << std::endl;
	}

	return ;
}

/**
 * @brief causes instance to 'take' `amount of damage
 * @param amount damage that will be taken
 */
void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hp <= 0)
		std::cout << "ClapTrap " << this->_name << " is dead." << std::endl;
	else
	{
		this->_hp -= amount;
		std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage." << std::endl;
	}

	return ;
}

/**
 * @brief causes instance to 'repair' `amount of damage
 * @param amount damage that will be repaired
 */
void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hp <= 0)
		std::cout << "ClapTrap " << this->_name << " is dead." << std::endl;
	else
	{
		if (this->_ep > 0)
		{
			this->_ep -= 1;
			this->_hp += amount;
			std::cout << "ClapTrap " << this->_name << " repairs " << amount << " points of damage." << std::endl;
		}
		else
			std::cout << "ClapTrap " << this->_name << " doesn't have enough EP." << std::endl;
	}

	return ;
}

/**
 * @brief checks if the values of two class instances are the same
 * @param rhs class instance being checked against
 * @return [true] if all members of each class are equal
 * @return [false] if not all members of each class are equal
 */
bool ClapTrap::operator==(ClapTrap const & rhs) const
{
	if (this->_name != rhs.getName())
		return (false);
	if (this->_hp != rhs.getHP())
		return (false);
	if (this->_ep != rhs.getEP())
		return (false);
	if (this->_att != rhs.getATT())
		return (false);
	return (true);
}

/**
 * @brief outputs the contents of `i` into o
 * @param o out stream
 * @param i instance that will be outputted
 * @return [std::ostream&] where to be outputted
 */
std::ostream & operator<<(std::ostream & o, ClapTrap const & i)
{
	if (i.getName().length() > 15)
		o << "|" << i.getName().substr(0, 14) << "." << "|" << std::endl;
	else
		o << "|" << std::setw(15) << i.getName() << "|" << std::endl;
	o << "| HP     : " << std::setw(5) << i.getHP() << "|" << std::endl;
	o << "| EP     : " << std::setw(5) << i.getEP() << "|" << std::endl;
	o << "| Attack : " << std::setw(5) << i.getATT() << "|" << std::endl;
	return (o);
}
