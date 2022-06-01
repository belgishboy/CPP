
#include "HumanA.h"

HumanA::HumanA (std::string name, Weapon &new_weapon)
{
	this->name = name;
	this->weapon = &new_weapon;
	std::cout << std::endl << "HumanA " << this->name << " Created" << std::endl;
	return ;
}

void HumanA::attack(void)
{
	std::cout << std::endl << name << " attacks with thier " << weapon->getType() << std::endl;
	return ;
}

HumanA::~HumanA (void)
{
	std::cout << std::endl << "HumanA " << this->name << " Destroyed" << std::endl;
	return ;
}
