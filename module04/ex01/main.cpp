
#include "Poly.h"

int main()
{
	// const Animal* meta = new Animal();
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();

	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// meta->makeSound();
	// j->makeSound();
	// i->makeSound();

	// delete meta;
	// delete j;
	// delete i;

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

	return (0);
}
