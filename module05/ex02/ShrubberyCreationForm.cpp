
#include "ShrubberyCreationForm.hpp"

SCF::SCF ( void )
	: AForm("ShrubberyCreationForm", 145, 137, "SPACE")
{
	std::cout << std::endl << "Default ShrubberyCreationForm Constructor called" << std::endl;
	return ;
}

SCF::SCF (std::string const target) 
	: AForm("ShrubberyCreationForm", 145, 137, target)
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

SCF & SCF::operator=(SCF const & rhs)
{
	std::cout << "ShrubberyCreationForm Assignment operator called" << std::endl;

	if (this != &rhs)
	{
		this->SCF::~SCF();
		*this = SCF(rhs);
	}

	return (*this);
}

void SCF::execute(Bureaucrat const & executor) const
{
	if (!this->getSign())
		throw AForm::FormCantSign();
	else if (executor.getGrade() > this->getGradeE())
		throw AForm::GradeTooLowException();
	else
	{
		std::ofstream newFile((this->getTarget() + "_shrubbery").c_str());
		for (int i = 0; i < 10; i++)
		{
			newFile << "              ,@@@@@@@,               " << std::endl;
			newFile << "      ,,,.   ,@@@@@@/@@,  .oo8888o.   " << std::endl;
			newFile << "   ,&%%&%&&%,@@@@@/@@@@@@,888888/8o  " << std::endl;
			newFile << "  ,%&%&&%&&%,@@@@@@/@@@8888888/88$$$' " << std::endl;
			newFile << "  %&&%&%&/%&&%@@@@/ /@@@8888888888$$' " << std::endl;
			newFile << "  %&&%/ %&%%&&@@ V /@@' `88\\8 `/88'  " << std::endl;
			newFile << "  `&% ` /%&'    |.|        \\ '|8'    " << std::endl;
			newFile << "     |o|        | |         | |       " << std::endl;
			newFile << "     |.|        | |         | |       " << std::endl;
			newFile << "    / ._\\//_/_/  ,\\_//___/.  \\_//__/" << std::endl;
			newFile << std::endl;
		}
		newFile.close();
	}
}

