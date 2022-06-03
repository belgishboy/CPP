
#include "Harl.h"

Harl::Harl ( void )
{
	std::cout << std::endl << "Harl  Created" << std::endl;
	return ;
}
void Harl::complain(std::string level)
{
	HarlAction p[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string l[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int i = 0;
	while (i < 4)
	{
		if (level == l[i])
		{
			(this->*p[i])();
			break ;
		}
		i ++;
	}
	return ;
}

void Harl::debug ( void )
{
	std::cout << "[DEBUG]" << std::endl << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
	return;
}

void Harl::info ( void )
{
	std::cout << "[INFO]" << std::endl << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	return;
}

void Harl::warning ( void )
{
	std::cout << "[WARNING]" << std::endl << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	return;
}

void Harl::error ( void )
{
	std::cout << "[ERROR]" << std::endl << "This is unacceptable! I want to speak to the manager now." << std::endl;
	return;
}

Harl::~Harl (void)
{
	std::cout << std::endl << "Harl Destroyed" << std::endl;
	return ;
}
