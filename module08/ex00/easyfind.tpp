
#include "easyfind.hpp"
#include <algorithm>


/**
 * @brief Finds value of `i in list `l
 * 
 * @param l container to be searched, assumed to be <int>
 * @param i int value to be found
 * @return T const& instance of `i in `l
 */
template< typename T >
typename T::iterator easyfind(T & l, const int i)
{
	typename T::iterator x = std::find(l.begin(), l.end(), i);
	if (x != l.end())
		return (x);
	throw NotFound();
}
