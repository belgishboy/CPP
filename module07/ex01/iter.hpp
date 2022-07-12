
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

template <typename T>
void plusPlus(T & x)
{
	x ++;

	return ;
}

template <typename T, typename Y>
void iter(T & add, size_t l, Y f)
{
	size_t _l = 0;
	while (_l < l)
	{
		f(add[_l]);
		_l ++;
	}
	return ;
}

template <typename T, typename Y>
void iter(T & add, size_t l, void (swap)(Y &, Y &) )
{
	size_t _l = 0;
	while (l > 1 && _l < l - 1)
	{
		swap(add[_l], add[_l + 1]);
		_l += 2;
	}
	return ;
}
