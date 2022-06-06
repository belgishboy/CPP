
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
 * @brief Construct a new Fixed:: Fixed object with an int
 * 
 * @param num [int] value to be assigned to _num
 */
Fixed::Fixed ( const int num )
{
	this->_num = num * (1 << this->_bits);
	std::cout << std::endl << "Int Constructor called" << std::endl;
	return ;
}

Fixed::Fixed ( const float fnum )
{
	this->_num = roundf(fnum * (1 << this->_bits));
	std::cout << std::endl << "Float Constructor called" << std::endl;
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
 * @return [int] _num value of object
 */
int Fixed::getRawBits (void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->_num);
}

/**
 * @brief Set the Raw Bits object
 * @param raw [int const] value to be assigned to _num
 */
void Fixed::setRawBits (int const raw)
{
	this->_num = raw;

	return ;
}

/**
 * @brief converts Fixed::_num fixed-point value to an floating-point value
 * 
 * @return [float] floating-point value of Fixed::_num
 */
float Fixed::toFloat(void) const
{
	float f;

	f = (float)(this->getRawBits()) / (float)(1 << this->_bits);

	return (f);
}

/**
 * @brief converts Fixed::_num fixed-point value to an integer value
 * 
 * @return [int] integer value of Fixed::_num
 */
int Fixed::toInt(void) const
{
	int num;

	num = this->_num / (1 << this->_bits);

	return (num);
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
 * @brief checks if the object is greater than rhs
 * @param rhs object being checked against
 * @return true if the object is greater than rhs
 * @return false if the object is not greater than rhs
 */
bool Fixed::operator>(Fixed const & rhs) const
{
	if (this->getRawBits() > rhs.getRawBits())
		return (true);
	return (false);
}

/**
 * @brief checks if the object is less than rhs
 * @param rhs object being checked against
 * @return true if the object is less than rhs
 * @return false if the object is not less than rhs
 */
bool Fixed::operator<(Fixed const & rhs) const
{
	if (this->getRawBits() < rhs.getRawBits())
		return (true);
	return (false);
}

/**
 * @brief checks if the object is greater than or equal to rhs
 * @param rhs object being checked against
 * @return true if the object is greater than or equal to rhs
 * @return false if the object is not greater than or equal to rhs
 */
bool Fixed::operator>=(Fixed const & rhs) const
{
	if (this->getRawBits() >= rhs.getRawBits())
		return (true);
	return (false);
}

/**
 * @brief checks if the object is less than or equal to rhs
 * @param rhs object being checked against
 * @return true if the object is less than or equal to rhs
 * @return false if the object is not less than or equal to rhs
 */
bool Fixed::operator<=(Fixed const & rhs) const
{
	if (this->getRawBits() <= rhs.getRawBits())
		return (true);
	return (false);
}

/**
 * @brief checks if the object is equal to rhs
 * @param rhs object being checked against
 * @return true if the object is equal to rhs
 * @return false if the object is not equal to rhs
 */
bool Fixed::operator==(Fixed const & rhs) const
{
	if (this->getRawBits() == rhs.getRawBits())
		return (true);
	return (false);
}

/**
 * @brief checks if the object is not equal to rhs
 * @param rhs object being checked against
 * @return true if the object is not equal to rhs
 * @return false if the object is equal to rhs
 */
bool Fixed::operator!=(Fixed const & rhs) const
{
	if (this->getRawBits() != rhs.getRawBits())
		return (true);
	return (false);
}

/**
 * @brief two objects added together
 * @param rhs object being checked against
 * @return [Fixed] object after the operation
 */
Fixed Fixed::operator+(Fixed const & rhs) const
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

/**
 * @brief one object subtracted by rhs
 * @param rhs object being checked against
 * @return [Fixed] object after the operation
 */
Fixed Fixed::operator-(Fixed const & rhs) const
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

/**
 * @brief two objects multiplied together
 * @param rhs object being checked against
 * @return [Fixed] object after the operation
 */
Fixed Fixed::operator*(Fixed const & rhs) const
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

/**
 * @brief one objects devided by the other
 * @param rhs object being checked against
 * @return [Fixed] object after the operation
 */
Fixed Fixed::operator/(Fixed const & rhs) const
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

/**
 * @brief post-increment on the instance of Fixed
 * @return [Fixed&] 
 */
Fixed & Fixed::operator++(void)
{
	this->_num ++;

	return (*this);
}

/**
 * @brief post-decrement on the instance of Fixed
 * @return [Fixed&] 
 */
Fixed & Fixed::operator--(void)
{
	this->_num --;

	return (*this);
}

/**
 * @brief pre-increment on the instance of Fixed
 * @return [Fixed ]
 */
Fixed Fixed::operator++(int)
{
	Fixed ref(*this);
	++*this;

	return (ref);
}

/**
 * @brief pre-decrement on the instance of Fixed
 * @return [Fixed ]
 */
Fixed Fixed::operator--(int)
{
	Fixed ref(*this);
	--*this;

	return (ref);
}

/**
 * @brief Checks which of the two instances is smaller
 * @param f1 first instance
 * @param f2 secound instance
 * @return [Fixed& ]
 */
Fixed & Fixed::min(Fixed & f1, Fixed & f2)
{
	return (f1 < f2 ? f1 : f2);
}

/**
 * @brief Checks which of the two instances is smaller
 * @param f1 first instance
 * @param f2 secound instance
 * @return [const Fixed&] 
 */
const Fixed & Fixed::min(Fixed const & f1, Fixed const & f2)
{
	return (f1 < f2 ? f1 : f2);
}

/**
 * @brief Checks which of the two instances is bigger
 * @param f1 first instance
 * @param f2 secound instance
 * @return [Fixed& ]
 */
Fixed & Fixed::max(Fixed & f1, Fixed & f2)
{
	return (f1 > f2 ? f1 : f2);
}

/**
 * @brief Checks which of the two instances is bigger
 * @param f1 first instance
 * @param f2 secound instance
 * @return [const Fixed&] 
 */
const Fixed & Fixed::max(Fixed const & f1, Fixed const & f2)
{
	return (f1 > f2 ? f1 : f2);
}


/**
 * @brief outputs the contents of `i` into o
 * @param o out stream
 * @param i instance that will be outputted
 * @return [std::ostream&] where to be outputted
 */
std::ostream & operator<<(std::ostream & o, Fixed const & i)
{
	o << i.toFloat();
	return (o);
}

const int Fixed::_bits = 8;
