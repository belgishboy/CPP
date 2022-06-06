
#include "ScavTrap.hpp"

/**
 * @brief Construct a new ScavTrap:: ScavTrap object
 * Also zeros _foo
 */
ScavTrap::ScavTrap ( void ): _foo(0)
{
	std::cout << std::endl << "Default Constructor called" << std::endl;
	return ;
}

/**
 * @brief Construct a new ScavTrap:: ScavTrap object
 * and assgins _foo the value of n
 * @param n value to be assgined to _foo
 */
ScavTrap::ScavTrap (int const n) : _foo(n)
{
	std::cout << std::endl << "Parametric Constructor called" << std::endl;
	return ;
}

/**
 * @brief Construct a new ScavTrap:: ScavTrap object as a copy of src
 * @param src instance to be copied
 */
ScavTrap::ScavTrap (ScavTrap const & src)
{
	std::cout << std::endl << "Copy Constructor called" << std::endl;
	*this = src;
	return ;
}

/**
 * @brief Destroy the ScavTrap:: ScavTrap object
 */
ScavTrap::~ScavTrap (void)
{
	std::cout << std::endl << "Destructor Called" << std::endl;
	return ;
}

/**
 * @brief gets the _foo value
 * @return [int] the value of _foo
 */
int ScavTrap::getFoo(void) const
{
	return (this->_foo);
}

/**
 * @brief Assigns the values of rhs to the instance
 * @param rhs values to be copied
 * @return [ScavTrap&] ref to the instance
 */
ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
	std::cout << std::endl << "Assignment operator called" << std::endl;

	if (this != &rhs)
	{
		this->_foo = rhs.getFoo();
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
	if (this->_foo != rhs.getFoo())
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
	o << "The value of _foo is : " << i.getFoo() << std::endl;
	return (o);
}
