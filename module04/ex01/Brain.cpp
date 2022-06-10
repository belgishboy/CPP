
#include "Poly.h"

/**
 * @brief Construct a new Brain:: Brain object
 */
Brain::Brain ( void )
{
	std::cout << std::endl << "Default Brain Constructor called" << std::endl;
	return ;
}

/**
 * @brief Construct a new Brain:: Brain object as a copy of src
 * @param src instance to be copied
 */
Brain::Brain (Brain const & src)
{
	std::cout << std::endl << "Copy Brain Constructor called" << std::endl;
	*this = src;
	return ;
}

/**
 * @brief Destroy the Brain:: Brain object
 */
Brain::~Brain (void)
{
	std::cout << std::endl << "Brain Destructor Called" << std::endl;
	return ;
}

//**SETTERS**//

/**
 * @brief Set the _ideas[i] member
 * @param idea [std::string]
 * @param i must be between 0 and 99
 */
void Brain::setIdea(std::string const idea, int const i)
{
	if ( i < 0 || i > 99)
	{
		std::cout << i << " is an invalid idea number." << std::endl;
		return ;
	}
	this->_ideas[i] = idea;

	return ;
}

/**
 * @brief Set the Ideas member
 * @param ideas 
 */
void Brain::setIdeas(std::string const ideas[100])
{
	for (int i = 0; i < 100; i ++)
		this->setIdea(ideas[i], i);

	return ;
}

//**Getters**//

/**
 * @brief Get the Idea object
 * @param i must be between 0 and 99
 * @return [std::string] 
 */
std::string Brain::getIdea(int const i) const
{
	if ( i < 0 || i > 99)
	{
		std::cout << i << " is an invalid idea number." << std::endl;
		return NULL;
	}
	return (this->_ideas[i]);
}

/**
 * @brief Get the Ideas object
 * @return std::string* 
 */
std::string const * Brain::getIdeas (void) const
{
	return (this->_ideas);
}


/**
 * @brief Assigns the values of rhs to the instance
 * @param rhs values to be copied
 * @return [Brain&] ref to the instance
 */
Brain & Brain::operator=(Brain const & rhs)
{
	std::cout << std::endl << "Brain Assignment operator called" << std::endl;

	if (this != &rhs)
	{
		this->setIdeas(rhs.getIdeas());
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
bool Brain::operator==(Brain const & rhs) const
{
	for (int i = 0; i < 100; i ++)
	{
		if (this->_ideas[i] != rhs.getIdea(i))
		return (false);
	}

	return (true);
}

/**
 * @brief outputs the contents of `i` into o
 * @param o out stream
 * @param i instance that will be outputted
 * @return [std::ostream&] where to be outputted
 */
std::ostream & operator<<(std::ostream & o, Brain const & i)
{
	for (int x = 0; x < 100; x ++)
		o << x << ": " << i.getIdea(x) << "." << std::endl;
	return (o);
}
