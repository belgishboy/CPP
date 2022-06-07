
#include "Poly.h"

/**
 * @brief Construct a new WrongCat:: WrongCat object
 * Also set _type to "WrongCat"
 */
WrongCat::WrongCat ( void )
{
	this->setType("WrongCat");
	std::cout << std::endl << "Default WrongCat Constructor called" << std::endl;
	return ;
}

/**
 * @brief Construct a new WrongCat:: WrongCat object as a copy of src
 * @param src instance to be copied
 */
WrongCat::WrongCat (WrongCat const & src)
{
	std::cout << std::endl << "Copy WrongCat Constructor called" << std::endl;
	*this = src;
	return ;
}

/**
 * @brief Destroy the WrongCat:: WrongCat object
 */
WrongCat::~WrongCat (void)
{
	std::cout << std::endl << "WrongCat Destructor Called" << std::endl;
	return ;
}

/**
 * @brief Assigns the values of rhs to the instance
 * @param rhs values to be copied
 * @return [WrongCat&] ref to the instance
 */
WrongCat & WrongCat::operator=(WrongCat const & rhs)
{
	std::cout << std::endl << "WrongCat Assignment operator called" << std::endl;

	if (this != &rhs)
	{
		this->_type = rhs.getType();
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
bool WrongCat::operator==(WrongCat const & rhs) const
{
	if (!((WrongAnimal)*this == (WrongAnimal)rhs))
		return (false);

	return (true);
}

void WrongCat::makeSound(void) const
{
	std::cout << "MOOOOOO." << std::endl;
}

/**
 * @brief outputs the contents of `i` into o
 * @param o out stream
 * @param i instance that will be outputted
 * @return [std::ostream&] where to be outputted
 */
std::ostream & operator<<(std::ostream & o, WrongCat const & i)
{
	o << (WrongAnimal)i;
	return (o);
}
