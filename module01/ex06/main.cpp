
# include "Harl.h"

int main(int argc, char **argv)
{
	Harl h;

	if (argc != 2)
	{
		std::cout << "[Probably complaining about insignificant problems]" << std::endl;
		return (1);
	}
	h.complain(argv[1]);

	return 0;
}
