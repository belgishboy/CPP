
#include "Fixed.hpp"

/**
 * @brief Construct a new Fixed:: Fixed object
 */
Fixed::Fixed ( void ):_num(0)
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
 * @brief Get the Raw Bits value of object
 * @return [int] _raw value of object
 */
int Fixed::getRawBits (void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_num);
}

/**
 * @brief Set the Raw Bits object
 * @param raw [int const] value to be assigned to _raw
 */
void Fixed::setRawBits (int const raw)
{
	this->_num = raw;

	return ;
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
		this->setRawBits(rhs.getRawBits());
	}

	return (*this);
}

/**
 * @brief outputs the contents of `i` into o
 * @param o out stream
 * @param i instance that will be outputted
 * @return [std::ostream&] where to be outputted
 */
std::ostream & operator<<(std::ostream & o, Fixed const & i)
{
	o << "The value of _raw is : " << i.getRawBits() << std::endl;
	return (o);
}
