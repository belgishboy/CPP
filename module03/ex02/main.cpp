
#include "Trap.h"

int main( void )
{
	ClapTrap h("Hendrik");

	h.attack("Vincent");
	h.takeDamage(9);
	h.beRepaired(1);
	std::cout << h << std::endl;

	ScavTrap v("Vincent");

	v.attack(h.getName());

	std::cout << v << std::endl;

	v.setEP(0);
	v.beRepaired(2);
	v.guardGate();

	v.takeDamage(100);
	v.guardGate();

	ScavTrap s("Saskia");

	std::cout << s << std::endl;
	s = v;

	std::cout << "after : " << std::endl << s << std::endl;

	return (0);
}