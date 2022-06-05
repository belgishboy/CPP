
# include <iostream>
# include <cmath>

int main(void)
{
	int _num = 55;
	static const int _bits = 8;
	float f;

	const float num = -10.4587631287;
	_num = roundf( num * ( 1 << _bits));
	f = (float)(_num / (1 << _bits));
	std::cout << "Constructor of integer to Fixed point n: " << f << std::endl;
	f = (float)(_num) / (float)(1 << _bits);
	std::cout << "other: " << f << std::endl;
	return (0);
}
