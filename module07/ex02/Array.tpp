
#include "Array.hpp"


/**
 * @brief Construct a new Array< T> object
 * 
 */
template<typename T>
Array<T>::Array (void): _n(0), _arrayPtr(NULL)
{
	std::cout << "Default Array Constructor called" << std::endl;
	this->_arrayPtr = new T[_n]();
	return ;
}

/**
 * @brief Construct a new Array< T> object
 * 
 * @param n 
 */
template <typename T>
Array<T>::Array(unsigned int const n): _n(n), _arrayPtr(NULL)
{
	this->_arrayPtr = new T[n]();
	std::cout << "Parametric Array Constructor called" << std::endl;
	return ;
}

/**
 * @brief Construct a new Array< T> object
 * 
 * @param src 
 */
template <typename T>
Array<T>::Array(Array<T> const & src): _n(src.size()), _arrayPtr(NULL)
{
	std::cout << "Copy Array Constructor called" << std::endl;
	this->_arrayPtr = new T[this->_n]();
	for (unsigned int i = 0; i < this->_n; i ++)
		this->_arrayPtr[i] = src._arrayPtr[i];
	return ;
}

/**
 * @brief Destroy the Array< T> object
 * 
 */
template <typename T>
Array<T>::~Array(void)
{
	if (this->_n > 0)
		delete [] this->_arrayPtr;
	std::cout << "Array Destructor Called" << std::endl;
	return ;
}


/**
 * @brief 
 * 
 * @param rhs 
 * @return Array<T>& 
 */
template <typename T>
Array<T> & Array<T>::operator=(Array<T> const & rhs)
{
	std::cout << "Array Assignment operator called" << std::endl;

	if (this != &rhs)
	{
		this->Array<T>::~Array();
		*this = Array(rhs);
	}

	return (*this);
}

/**
 * @brief 
 * 
 * @param i 
 * @return T& 
 */
template <typename T>
T& Array<T>::operator[](unsigned int i) const
{
	if (i >= this->_n)
		throw Array::OutOfBounds();
	else
		return (this->_arrayPtr[i]);
}

template <typename T>
char const * Array<T>::OutOfBounds::what() const throw()
{
	return ("Index out of bounds.");
}

/**
 * @brief returns the size of the array
 * 
 * @return unsigned int 
 */
template <typename T>
unsigned int Array<T>::size (void) const
{
	return (this->_n);
}
