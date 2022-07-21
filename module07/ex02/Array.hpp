
#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

// CLASS
template< typename T >
class Array
{
	public :
		Array (void);							//CANONICAL: Default Constructor
		Array (unsigned int const n);
		Array (Array<T> const & src);			//CANONICAL: Constructor by copy
		~Array (void);							//CANONICAL: Default Destructor

		Array & operator=(Array<T> const & rhs);	//CANONICAL: To assign the values of one class to another
		T & operator[](unsigned int i) const;

		unsigned int size (void) const;

		class OutOfBounds : public std::exception
		{
			public :
				virtual const char* what() const throw();
		};

	private :
		unsigned int const _n;
		T * _arrayPtr;

};

#include "Array.tpp"

//USEFUL: used to output the contents of the class into a stream
//std::ostream & operator<<(std::ostream & o, Array const & i);
#endif
