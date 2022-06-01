
#include "HumanB.h"

HumanB::HumanB (std::string name)
{
	this->name = name;
	std::cout << std::endl << "HumanB " << this->name << " Created" << std::endl;
	return ;
}

void HumanB::attack(void)
{
	std::cout << std::endl << name << " attacks with thier " << weapon.getType() << std::endl;
	return ;
}

void HumanB::setWeapon (Weapon weapon)
{
	this->weapon = weapon;
	return ;
}

HumanB::~HumanB (void)
{
	std::cout << std::endl << "HumanB " << this->name << " Destroyed" << std::endl;
	return ;
}
