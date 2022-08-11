
#include "Poly.h"

int main()
{
	Dog basic;
	{
		Dog tmp = basic;
	} 
	std::cout << basic << std::endl;
	// int y = 3;
	// Animal **zoo  = new Animal*[y];
	// for (int x = 0; x < y; x ++)
	// {
	// 	if (x % 2 == 0)
	// 	{
	// 		zoo[x] = new Dog();
	// 	}
	// 	else 
	// 		zoo[x] = new Cat();
	// }


	// std::cout << *((Dog *)(zoo[2])) << std::endl;
	// ((Dog *)(zoo[2]))->setIdea("This is a old Idea.", 2);
	// std::cout << *((Dog *)(zoo[2])) << std::endl;
	// std::cout << *((Dog *)(zoo[0])) << std::endl;
	// Dog d(*((Dog *)(zoo[2])));
	// d.setIdea("This is a very new Idea.", 2);
	// std::cout << d << std::endl;
	// std::cout << *((Dog *)(zoo[2])) << std::endl;
	// for (int x = 0; x < y; x ++)
	// 	delete zoo[x];
	// delete[] zoo;

	return (0);
}
