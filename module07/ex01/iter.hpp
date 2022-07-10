
#include <iostream>

template <typename T>
void swap(T & a, T & b)
{
	T z = a;
	a = b;
	b = z;
	return ;
}

template <typename T>
T & max( T & x, T & y)
{
	return ( x > y ? x : y);
}

template <typename T>
T & min( T & x, T & y)
{
	return ( x < y ? x : y);
}
