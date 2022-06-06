
# include <iostream>
# include <cmath>

int main(void)
{
	int _num = 55;
	static const int _bits = 8;
	float f;

	const float num = ( 42.42f );
	_num = roundf( num * ( 1 << _bits));
	f = ( num * ( 1 << _bits));
	std::cout << "Constructor of integer to Fixed point n: " << _num << std::endl;
	
	std::cout << "other: " << f << std::endl;


	std::cout << "output : " << ((float)(f) / (float)(1 << _bits)) << std::endl;
	f = (float)(_num) / (float)(1 << _bits);
	std::cout << "output : " << f << std::endl;

	return (0);
}
