
#include "Sample.h"

/**
 * @brief Construct a new Sample:: Sample object
 * Also zeros _foo
 */
Sample::Sample ( void ): _foo(0)
{
	std::cout << std::endl << "Default Sample Constructor called" << std::endl;
	return ;
}

/**
 * @brief Construct a new Sample:: Sample object
 * and assgins _foo the value of n
 * @param n value to be assgined to _foo
 */
Sample::Sample (int const n) : _foo(n)
{
	std::cout << std::endl << "Parametric Sample Constructor called" << std::endl;
	return ;
}

/**
 * @brief Construct a new Sample:: Sample object as a copy of src
 * @param src instance to be copied
 */
Sample::Sample (Sample const & src)
{
	std::cout << std::endl << "Copy Sample Constructor called" << std::endl;
	*this = src;
	return ;
}

/**
 * @brief Destroy the Sample:: Sample object
 */
Sample::~Sample (void)
{
	std::cout << std::endl << "Sample Destructor Called" << std::endl;
	return ;
}

/**
 * @brief gets the _foo value
 * @return [int] the value of _foo
 */
int Sample::getFoo(void) const
{
	return (this->_foo);
}

/**
 * @brief Assigns the values of rhs to the instance
 * @param rhs values to be copied
 * @return [Sample&] ref to the instance
 */
Sample & Sample::operator=(Sample const & rhs)
{
	std::cout << std::endl << "Sample Assignment operator called" << std::endl;

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
bool Sample::operator==(Sample const & rhs) const
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
std::ostream & operator<<(std::ostream & o, Sample const & i)
{
	o << "The value of _foo is : " << i.getFoo() << std::endl;
	return (o);
}
