
#include "Fixed.hpp"

/**
 * @brief Construct a new Fixed:: Fixed object
 */
Fixed::Fixed ( void )
{
	std::cout << std::endl << "Default Constructor called" << std::endl;
	return ;
}

/**
 * @brief Construct a new Fixed:: Fixed object as a copy of src
 * @param src instance to be copied
 */
Fixed::Fixed (Fixed const & src)
{
	std::cout << std::endl << "Copy Constructor called" << std::endl;
	*this = src;
	return ;
}

/**
 * @brief Destroy the Fixed:: Fixed object
 */
Fixed::~Fixed (void)
{
	std::cout << std::endl << "Destructor Called" << std::endl;
	return ;
}

/**
 * @brief gets the _foo value
 * @return [int] the value of _foo
 */
int Fixed::getFoo(void) const
{
	return (this->_foo);
}

/**
 * @brief Assigns the values of rhs to the instance
 * @param rhs values to be copied
 * @return [Fixed&] ref to the instance
 */
Fixed & Fixed::operator=(Fixed const & rhs)
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
bool Fixed::operator==(Fixed const & rhs)
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
std::ostream & operator<<(std::ostream & o, Fixed const & i)
{
	o << "The value of _foo is : " << i.getFoo() << std::endl;
	return (o);
}