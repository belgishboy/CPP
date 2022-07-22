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
Span::Span (Span const & src): _n(src._n)
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
		if (this->_l.size() < this->_n)
		{
			this->_l.push_back(n);
			this->_sort = 0;
			this->_i ++;
		}
		else
			throw OutOfBounds();
	}
	catch (OutOfBounds &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int Span::shortestSpan(void)
{
	try
	{
		if (this->_l.size() < 2)
			throw TooShort();
		if (!this->_sort)
		{
			std::sort(this->_l.begin(), this->_l.end());
			this->_sort = 1;
		}
		int s = std::abs(*(this->_l.begin())) - std::abs(*(this->_l.begin()+1));
		for (std::vector<int>::iterator it=this->_l.begin()+1; it!=this->_l.end() - 1; ++it)
		{
			int temp = std::abs(*(it + 1)) - std::abs(*it);
			if (temp < s)
			{
				std::cout << *(it + 1) << " - " << *it << ". s was : " << s << std::endl;
				s = temp;
			}
		}
		return (s);
	}
	catch (TooShort &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (-1);
}

int Span::longestSpan(void)
{
	try
	{
		if (this->_l.size() < 2)
			throw TooShort();
		return (*(std::max_element(this->_l.begin(), this->_l.end())) - *(std::min_element(this->_l.begin(), this->_l.end())));
	}
	catch (TooShort &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (-1);
}
