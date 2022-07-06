
#include "Data.hpp"

/**
 * @brief Construct a new Data:: Data object
 * Also zeros _foo
 */
Data::Data ( void ): _foo(0)
{
	std::cout << std::endl << "Default Data Constructor called" << std::endl;
	return ;
}

/**
 * @brief Construct a new Data:: Data object
 * and assgins _foo the value of n
 * @param n value to be assgined to _foo
 */
Data::Data (int const n) : _foo(n)
{
	std::cout << std::endl << "Parametric Data Constructor called" << std::endl;
	return ;
}

/**
 * @brief Construct a new Data:: Data object as a copy of src
 * @param src instance to be copied
 */
Data::Data (Data const & src)
{
	std::cout << std::endl << "Copy Data Constructor called" << std::endl;
	*this = src;
	return ;
}

/**
 * @brief Destroy the Data:: Data object
 */
Data::~Data (void)
{
	std::cout << std::endl << "Data Destructor Called" << std::endl;
	return ;
}

/**
 * @brief gets the _foo value
 * @return [int] the value of _foo
 */
int Data::getFoo(void) const
{
	return (this->_foo);
}

/**
 * @brief Assigns the values of rhs to the instance
 * @param rhs values to be copied
 * @return [Data&] ref to the instance
 */
Data & Data::operator=(Data const & rhs)
{
	std::cout << std::endl << "Data Assignment operator called" << std::endl;

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
bool Data::operator==(Data const & rhs) const
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
std::ostream & operator<<(std::ostream & o, Data const & i)
{
	o << "The value of _foo is : " << i.getFoo() << std::endl;
	return (o);
}
