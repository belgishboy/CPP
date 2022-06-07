
#include "Poly.h"

/**
 * @brief Construct a new Animal:: Animal object
 * Also set _type to "Animal"
 */
Animal::Animal ( void ): _type("Animal")
{
	std::cout << std::endl << "Default Animal Constructor called" << std::endl;
	return ;
}

/**
 * @brief Construct a new Animal:: Animal object as a copy of src
 * @param src instance to be copied
 */
Animal::Animal (Animal const & src)
{
	std::cout << std::endl << "Copy Animal Constructor called" << std::endl;
	*this = src;
	return ;
}

/**
 * @brief Destroy the Animal:: Animal object
 */
Animal::~Animal (void)
{
	std::cout << std::endl << "Animal Destructor Called" << std::endl;
	return ;
}

//**SETTERS**//

/**
 * @brief sets the _type member
 * @param type [std::string const]
*/
void Animal::setType(std::string const type)
{
	this->_type = type;

	return ;
}

//**Getters**//

/**
 * @brief Get the Type object
 * @return [std::string] 
 */
std::string Animal::getType (void) const
{
	return (this->_type);
}

/**
 * @brief Assigns the values of rhs to the instance
 * @param rhs values to be copied
 * @return [Animal&] ref to the instance
 */
Animal & Animal::operator=(Animal const & rhs)
{
	std::cout << std::endl << "Animal Assignment operator called" << std::endl;

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
bool Animal::operator==(Animal const & rhs) const
{
	if (this->_type != rhs.getType())
		return (false);

	return (true);
}

void Animal::makeSound(void) const
{
	std::cout << "This Animal doesnt know what sound to make." << std::endl;
}

/**
 * @brief outputs the contents of `i` into o
 * @param o out stream
 * @param i instance that will be outputted
 * @return [std::ostream&] where to be outputted
 */
std::ostream & operator<<(std::ostream & o, Animal const & i)
{
	o << "The value of _type is : " << i.getType();
	return (o);
}
