
#include "Poly.h"

int main()
{

	Animal **zoo  = new Animal*[6];
	for (int x = 0; x < 6; x ++)
	{
		if (x % 2 == 0)
		{
			zoo[x] = new Dog();
		}
		else 
			zoo[x] = new Cat();
	}

	std::cout << *((Dog *)(zoo[0])) << std::endl;
	for (int x = 0; x < 6; x ++)
		delete zoo[x];
	delete[] zoo;
	std::cout << "all done." << std::endl;
	return (0);
}
