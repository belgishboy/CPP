
#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <list>


template< typename T >
typename T::iterator easyfind(T & l, const int i);

class NotFound : public std::exception
{
	public :
		const char * what() const throw()
		{
			return (" Not Found.");
		}
};

#include "easyfind.tpp"

#endif
