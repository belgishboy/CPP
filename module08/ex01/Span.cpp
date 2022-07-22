#include "Span.hpp"

/**
 * @brief Construct a new Span:: Span object
 */
Span::Span ( void ): _n(0), _sort(0), _i(0)
{
	std::cout << std::endl << "Default Span Constructor called" << std::endl;
	return ;
}

/**
 * @brief Construct a new Span:: Span object
 * @param n value to be assgined to _foo
 */
Span::Span (unsigned int const n) : _n(n), _sort(0), _i(0)
{
	std::cout << std::endl << "Parametric Span Constructor called" << std::endl;
	return ;
}

/**
 * @brief Construct a new Span:: Span object as a copy of src
 * @param src instance to be copied
 */
Span::Span (Span const & src)
{
	std::cout << std::endl << "Copy Span Constructor called" << std::endl;
	*this = src;
	return ;
}

/**
 * @brief Destroy the Span:: Span object
 */
Span::~Span (void)
{
	std::cout << std::endl << "Span Destructor Called" << std::endl;
	return ;
}

/**
 * @brief Assigns the values of rhs to the instance
 * @param rhs values to be copied
 * @return [Span&] ref to the instance
 */
Span & Span::operator=(Span const & rhs)
{
	std::cout << std::endl << "Span Assignment operator called" << std::endl;

	if (this != &rhs)
	{
		*this = rhs;
	}

	return (*this);
}

void Span::addNumber(int n)
{
	try
	{
		if (this->_l.end() < this->_n)
		{
			this->_l.pushback(n);
		}
		else
			throw Span::OutofBounds();
	}
	catch (OutofBounds &e)
		std::cerr << e.what() << std::endl;
}

int const Span::shortestSpan(void)
{

}