
#include "Poly.h"

int main()
{
	Dog basic;
	{
		Dog tmp = basic;
		tmp.setIdea("Must get ball.", 3);
		std::cout << tmp << std::endl;
	} 
	std::cout << basic << std::endl;

	return (0);
}
