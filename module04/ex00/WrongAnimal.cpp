
#include "Poly.h"

/**
 * @brief Construct a new WrongAnimal:: WrongAnimal object
 * Also set _type to "WrongAnimal"
 */
WrongAnimal::WrongAnimal ( void ): _type("WrongAnimal")
{
	std::cout << std::endl << "Default WrongAnimal Constructor called" << std::endl;
	return ;
}

/**
 * @brief Construct a new WrongAnimal:: WrongAnimal object as a copy of src
 * @param src instance to be copied
 */
WrongAnimal::WrongAnimal (WrongAnimal const & src)
{
	std::cout << std::endl << "Copy WrongAnimal Constructor called" << std::endl;
	*this = src;
	return ;
}

/**
 * @brief Destroy the WrongAnimal:: WrongAnimal object
 */
WrongAnimal::~WrongAnimal (void)
{
	std::cout << std::endl << "WrongAnimal Destructor Called" << std::endl;
	return ;
}

//**SETTERS**//

/**
 * @brief sets the _type member
 * @param type [std::string const]
*/
void WrongAnimal::setType(std::string const type)
{
	this->_type = type;

	return ;
}

//**Getters**//

/**
 * @brief Get the Type object
 * @return [std::string] 
 */
std::string WrongAnimal::getType (void) const
{
	return (this->_type);
}

/**
 * @brief Assigns the values of rhs to the instance
 * @param rhs values to be copied
 * @return [WrongAnimal&] ref to the instance
 */
WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs)
{
	std::cout << std::endl << "WrongAnimal Assignment operator called" << std::endl;

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
bool WrongAnimal::operator==(WrongAnimal const & rhs) const
{
	if (this->_type != rhs.getType())
		return (false);

	return (true);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "BARF BARF. Im now throwing up." << std::endl;
}

/**
 * @brief outputs the contents of `i` into o
 * @param o out stream
 * @param i instance that will be outputted
 * @return [std::ostream&] where to be outputted
 */
std::ostream & operator<<(std::ostream & o, WrongAnimal const & i)
{
	o << "The value of _type is : " << i.getType();
	return (o);
}
