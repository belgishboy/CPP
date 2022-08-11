
#include "Poly.h"

/**
 * @brief Construct a new Cat:: Cat object
 * Also set _type to "Cat"
 */
Cat::Cat ( void )
{
	//std::cout << std::endl << "Default Cat Constructor called" << std::endl;
	this->setType("Cat");
	_brain = new Brain();
	_brain->setIdea("I Hate Humans", 0);
	_brain->setIdea("Must scratch something", 1);
	
	return ;
}

/**
 * @brief Construct a new Cat:: Cat object as a copy of src
 * @param src instance to be copied
 */
Cat::Cat (Cat const & src)
{
	std::cout << std::endl << "Copy Cat Constructor called" << std::endl;
	this->_brain = new Brain(src.getBrain());
	this->setType(src.getType());
	return ;
}

/**
 * @brief Destroy the Cat:: Cat object
 */
Cat::~Cat (void)
{
	delete _brain;
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

void Cat::setIdea(std::string const idea, int const i)
{
	this->_brain->setIdea(idea, i);
}

Brain & Cat::getBrain (void)
{
	return (*this->_brain);
}

Brain & Cat::getBrain (void) const
{
	return (*this->_brain);
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
std::ostream & operator<<(std::ostream & o, Cat & i)
{
	i.makeSound();
	o << "The value of _type is : " << i.getType() << std::endl;
	o << i.getBrain();
	return (o);
}
