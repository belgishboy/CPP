# include "Zombie.h"

int main (void)
{
	std::string	input;
	int			N;
	Zombie		*zombie;

	zombie = NULL;

	while (1)
	{
		N = -1;
		std::cout << std::endl << "Enter one of the following commands: horde, EXIT" << std::endl;
		std::cin >> input;
		if (input == "EXIT")
			break ;
		else if (input == "horde")
		{
			if (zombie)
				delete zombie;

			std::cout << std::endl << "How many big should the horde be [0 - 100]: " << std::endl;
			std::cin >> input;
			N = stoi(input);
			if (N < 0 || N > 100)
			{
				std::cout << std::endl << "Invalid command" << std::endl;
				continue ;
			}

			std::cout << std::endl << "Enter a name for the new Horde" << std::endl;
			std::cin >> input;
			zombie = zombieHorde(N, input);
		}
		else
		{
			std::cout << std::endl << "Invalid command" << std::endl;
		}
	}
	if (zombie)
		delete zombie;

	return (0);
}
