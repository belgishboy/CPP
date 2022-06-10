
#include "Poly.h"

int main()
{
	// const AAnimal* meta = new AAnimal();
	// const AAnimal* j = new Dog();
	// const AAnimal* i = new Cat();

	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// meta->makeSound();
	// j->makeSound();
	// i->makeSound();

	// delete meta;
	// delete j;
	// delete i;

	AAnimal **zoo  = new AAnimal*[6];
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
