
#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

// CLASS
template <typename T>
class Array
{
	public :
		Array<T> (void);							//CANONICAL: Default Constructor
		Array<T> (unsigned int const n);
		Array<T> (Array<T> const & src);			//CANONICAL: Constructor by copy
		~Array<T> (void);							//CANONICAL: Default Destructor

		Array<T> & operator=(Array<T> const & rhs);	//CANONICAL: To assign the values of one class to another
		T& operator[](unsigned int i) const;

		unsigned int size (void) const;

	private :
		unsigned int const _n;

};

//USEFUL: used to output the contents of the class into a stream
std::ostream & operator<<(std::ostream & o, Array const & i);
#endif
