
#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <list>


template< typename T >
T const & easyfind(std::list<T> l, const int i);

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
