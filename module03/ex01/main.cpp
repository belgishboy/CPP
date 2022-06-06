
#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap h("Hendrik");

	h.attack("Vincent");
	h.takeDamage(9);
	h.beRepaired(1);
	std::cout << h << std::endl;
	return (0);
}
