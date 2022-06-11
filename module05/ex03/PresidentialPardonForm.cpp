
#include "PresidentialPardonForm.hpp"

PPF::PPF ( void )
	: AForm("PresidentialPardonForm", 25, 5, "Vincent")
{
	std::cout << std::endl << "Default PresidentialPardonForm Constructor called" << std::endl;
	return ;
}

PPF::PPF (std::string const target) 
	: AForm("PresidentialPardonForm", 25, 5, target)
{
	std::cout << std::endl << "Parametric PresidentialPardonForm Constructor called" << std::endl;
	return ;
}

/**
 * @brief Construct a new PPF:: PPF object as a copy of src
 * @param src instance to be copied
 */
PPF::PPF (PPF const & src)
{
	std::cout << std::endl << "Copy PresidentialPardonForm Constructor called" << std::endl;
	*this = src;
	return ;
}

/**
 * @brief Destroy the PPF:: PPF object
 */
PPF::~PPF (void)
{
	std::cout << std::endl << "PresidentialPardonForm Destructor Called" << std::endl;
	return ;
}

PPF & PPF::operator=(PPF const & rhs)
{
	std::cout << "PresidentialPardonForm Assignment operator called" << std::endl;

	if (this != &rhs)
	{
		this->PPF::~PPF();
		*this = PPF(rhs);
	}

	return (*this);
}

void PPF::execute(Bureaucrat const & executor) const
{
	if (!this->getSign())
		throw AForm::FormCantSign();
	else if (executor.getGrade() > this->getGradeE())
		throw AForm::GradeTooLowException();
	else
			std::cout << this->getTarget() << " has been pardoned by President Hendrik Lehmann." << std::endl;
}

