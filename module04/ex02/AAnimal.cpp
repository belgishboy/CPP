
#include "Poly.h"

/**
 * @brief Construct a new AAnimal:: AAnimal object
 * Also set _type to "AAnimal"
 */
AAnimal::AAnimal ( void ): _type("AAnimal")
{
	std::cout << std::endl << "Default AAnimal Constructor called" << std::endl;
	return ;
}

/**
 * @brief Construct a new AAnimal:: AAnimal object as a copy of src
 * @param src instance to be copied
 */
AAnimal::AAnimal (AAnimal const & src)
{
	std::cout << std::endl << "Copy AAnimal Constructor called" << std::endl;
	*this = src;
	return ;
}

/**
 * @brief Destroy the AAnimal:: AAnimal object
 */
AAnimal::~AAnimal (void)
{
	std::cout << std::endl << "AAnimal Destructor Called" << std::endl;
	return ;
}

//**SETTERS**//

/**
 * @brief sets the _type member
 * @param type [std::string const]
*/
void AAnimal::setType(std::string const type)
{
	this->_type = type;

	return ;
}

//**Getters**//

/**
 * @brief Get the Type object
 * @return [std::string] 
 */
std::string AAnimal::getType (void) const
{
	return (this->_type);
}

/**
 * @brief Assigns the values of rhs to the instance
 * @param rhs values to be copied
 * @return [AAnimal&] ref to the instance
 */
AAnimal & AAnimal::operator=(AAnimal const & rhs)
{
	std::cout << std::endl << "AAnimal Assignment operator called" << std::endl;

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
bool AAnimal::operator==(AAnimal const & rhs) const
{
	if (this->_type != rhs.getType())
		return (false);

	return (true);
}

void AAnimal::makeSound(void) const
{
	std::cout << "This AAnimal doesnt know what sound to make." << std::endl;
}

/**
 * @brief outputs the contents of `i` into o
 * @param o out stream
 * @param i instance that will be outputted
 * @return [std::ostream&] where to be outputted
 */
std::ostream & operator<<(std::ostream & o, AAnimal const & i)
{
	o << "The value of _type is : " << i.getType();
	return (o);
}
