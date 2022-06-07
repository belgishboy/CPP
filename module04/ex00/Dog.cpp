
#include "Poly.h"

/**
 * @brief Construct a new Dog:: Dog object
 * Also set _type to "Dog"
 */
Dog::Dog ( void ): _type("Dog")
{
	std::cout << std::endl << "Default Dog Constructor called" << std::endl;
	return ;
}

/**
 * @brief Construct a new Dog:: Dog object as a copy of src
 * @param src instance to be copied
 */
Dog::Dog (Dog const & src)
{
	std::cout << std::endl << "Copy Dog Constructor called" << std::endl;
	*this = src;
	return ;
}

/**
 * @brief Destroy the Dog:: Dog object
 */
Dog::~Dog (void)
{
	std::cout << std::endl << "Dog Destructor Called" << std::endl;
	return ;
}

//**SETTERS**//

/**
 * @brief sets the _type member
 * @param type [std::string const]
*/
void Dog::setType(std::string const type)
{
	this->_type = type;

	return ;
}

//**Getters**//

/**
 * @brief Get the Type object
 * @return [std::string] 
 */
std::string Dog::getType (void) const
{
	return (this->_type);
}

/**
 * @brief Assigns the values of rhs to the instance
 * @param rhs values to be copied
 * @return [Dog&] ref to the instance
 */
Dog & Dog::operator=(Dog const & rhs)
{
	std::cout << std::endl << "Dog Assignment operator called" << std::endl;

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
bool Dog::operator==(Dog const & rhs) const
{
	if (this->_type != rhs.getType())
		return (false);

	return (true);
}

/**
 * @brief outputs the contents of `i` into o
 * @param o out stream
 * @param i instance that will be outputted
 * @return [std::ostream&] where to be outputted
 */
std::ostream & operator<<(std::ostream & o, Dog const & i)
{
	o << "The value of _type is : " << i.getType();
	return (o);
}
