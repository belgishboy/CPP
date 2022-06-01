
#include "HumanA.h"

HumanA::HumanA (std::string name, Weapon weapon)
{
	this->name = name;
	this->weapon = weapon;
	std::cout << std::endl << "HumanA " << this->name << " Created" << std::endl;
	return ;
}

void HumanA::attack(void)
{
	std::cout << std::endl << name << " attacks with thier " << weapon.getType() << std::endl;
	return ;
}

HumanA::~HumanA (void)
{
	std::cout << std::endl << "HumanA " << this->name << " Destroyed" << std::endl;
	return ;
}
