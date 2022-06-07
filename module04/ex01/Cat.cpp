
#include "Poly.h"

/**
 * @brief Construct a new Cat:: Cat object
 * Also set _type to "Cat"
 */
Cat::Cat ( void )
{
	this->setType("Cat");
	std::cout << std::endl << "Default Cat Constructor called" << std::endl;
	return ;
}

/**
 * @brief Construct a new Cat:: Cat object as a copy of src
 * @param src instance to be copied
 */
Cat::Cat (Cat const & src)
{
	std::cout << std::endl << "Copy Cat Constructor called" << std::endl;
	*this = src;
	return ;
}

/**
 * @brief Destroy the Cat:: Cat object
 */
Cat::~Cat (void)
{
	std::cout << std::endl << "Cat Destructor Called" << std::endl;
	return ;
}

/**
 * @brief Assigns the values of rhs to the instance
 * @param rhs values to be copied
 * @return [Cat&] ref to the instance
 */
Cat & Cat::operator=(Cat const & rhs)
{
	std::cout << std::endl << "Cat Assignment operator called" << std::endl;

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
bool Cat::operator==(Cat const & rhs) const
{
	if (!((Animal)*this == (Animal)rhs))
		return (false);

	return (true);
}

void Cat::makeSound(void) const
{
	std::cout << "MEOW." << std::endl;
}

/**
 * @brief outputs the contents of `i` into o
 * @param o out stream
 * @param i instance that will be outputted
 * @return [std::ostream&] where to be outputted
 */
std::ostream & operator<<(std::ostream & o, Cat const & i)
{
	o << (Animal)i;
	return (o);
}
