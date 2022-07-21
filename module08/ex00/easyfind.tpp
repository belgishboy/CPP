
#include "easyfind.hpp"


/**
 * @brief Finds value of `i in list `l
 * 
 * @param l container to be searched, assumed to be <int>
 * @param i int value to be found
 * @return T const& instance of `i in `l
 */
template< typename T >
T const & easyfind(std::list<T> l, const int i)
{
	for (typename std::list<T>::iterator x = l.begin(); x != l.end(); x ++)
	{
		if (*x == i)
			return (*x);
	}
	throw NotFound();
}
