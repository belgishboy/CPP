# include "Zombie.h"

int main (void)
{
	std::string	input;

	while (1)
	{
		std::cout << std::endl << "Enter one of the following commands: newZombie, Chump, EXIT" << std::endl;
		std::cin >> input;
		if (input == "EXIT")
			break ;
		else if (input == "newZombie")
		{
			std::cout << std::endl << "Enter a name for the new Zombie" << std::endl;
			std::cin >> input;
			(newZombie(input))->announce();
		}
		else if (input == "Chump")
		{
			std::cout << std::endl << "Enter a name for the random Chump" << std::endl;
			std::cin >> input;
			randomChump(input);
		}
		else
		{
			std::cout << std::endl << "Invalid command" << std::endl;
		}
	}
	return (0);
}