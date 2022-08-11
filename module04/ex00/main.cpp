
#include "Poly.h"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	meta->makeSound();
	j->makeSound();
	i->makeSound();

	delete meta;
	delete j;
	delete i;

	const WrongAnimal* w_meta = new WrongAnimal();
	const WrongAnimal* w_i = new WrongCat();
	const WrongCat c;

	std::cout << w_i->getType() << " " << std::endl;
	w_meta->makeSound();
	w_i->makeSound();
	c.makeSound();

	delete w_meta;
	delete w_i;

	return (0);
}
