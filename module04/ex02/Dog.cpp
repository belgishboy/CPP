
#include "Poly.h"

/**
 * @brief Construct a new Dog:: Dog object
 * Also set _type to "Dog"
 */
Dog::Dog ( void )
{
	std::cout << std::endl << "Default Dog Constructor called" << std::endl;
	this->setType("Dog");
	_brain = new Brain();
	_brain->setIdea("WOOF", 0);
	_brain->setIdea("Must Get Squirrel", 1);
	
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
	delete _brain;
	std::cout << std::endl << "Dog Destructor Called" << std::endl;
	return ;
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
	if (!((AAnimal)*this == (AAnimal)rhs))
		return (false);

	return (true);
}

std::string const Dog::getBrain (void) const
{
	return (this->_brain->getIdea(1));
}


void Dog::makeSound(void) const
{
	std::cout << "BARK BARK." << std::endl;
}

/**
 * @brief outputs the contents of `i` into o
 * @param o out stream
 * @param i instance that will be outputted
 * @return [std::ostream&] where to be outputted
 */
std::ostream & operator<<(std::ostream & o, Dog const & i)
{
	i.makeSound();
	o << (AAnimal)i;
	o << i.getBrain();
	return (o);
}
