
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

	int y = 3;
	AAnimal **zoo  = new AAnimal*[y];
	for (int x = 0; x < y; x ++)
	{
		if (x % 2 == 0)
		{
			zoo[x] = new Dog();
		}
		else 
			zoo[x] = new Cat();
	}


	std::cout << *((Cat *)(zoo[1])) << std::endl;
	((Cat *)(zoo[1]))->setIdea("This is a old Idea.", 2);
	std::cout << *((Cat *)(zoo[1])) << std::endl;
	Cat d(*((Cat *)(zoo[1])));
	d.setIdea("This is a very new Idea.", 2);
	std::cout << d << std::endl;
	std::cout << *((Cat *)(zoo[1])) << std::endl;
	for (int x = 0; x < y; x ++)
		delete zoo[x];
	delete[] zoo;

	return (0);
}
