# include "Zombie.h"

int main (void)
{
	std::string	input;
	Zombie *zombie;

	zombie = NULL;

	while (1)
	{
		std::cout << std::endl << "Enter one of the following commands: newZombie, Chump, EXIT" << std::endl;
		std::cin >> input;
		if (input == "EXIT")
			break ;
	}
	if (zombie)
		delete zombie;

	return (0);
}
