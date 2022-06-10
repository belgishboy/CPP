
#include "ShrubberyCreationForm.hpp"

SCF::SCF ( void )
	: AForm("ShrubberyCreationForm", 145, 137), _target("SPACE")
{
	std::cout << std::endl << "Default ShrubberyCreationForm Constructor called" << std::endl;
	return ;
}

SCF::SCF (std::string const target) 
	:: AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << std::endl << "Parametric ShrubberyCreationForm Constructor called" << std::endl;
	return ;
}

/**
 * @brief Construct a new SCF:: SCF object as a copy of src
 * @param src instance to be copied
 */
SCF::SCF (SCF const & src)
{
	std::cout << std::endl << "Copy ShrubberyCreationForm Constructor called" << std::endl;
	*this = src;
	return ;
}

/**
 * @brief Destroy the SCF:: SCF object
 */
SCF::~SCF (void)
{
	std::cout << std::endl << "ShrubberyCreationForm Destructor Called" << std::endl;
	return ;
}