
#include "RobotomyCreationForm.hpp"

RCF::RCF ( void )
	: AForm("RobotomyCreationForm", 72, 45, "Clemens")
{
	std::cout << std::endl << "Default RobotomyCreationForm Constructor called" << std::endl;
	return ;
}

RCF::RCF (std::string const target) 
	: AForm("RobotomyCreationForm", 72, 45, target)
{
	std::cout << std::endl << "Parametric RobotomyCreationForm Constructor called" << std::endl;
	return ;
}

/**
 * @brief Construct a new RCF:: RCF object as a copy of src
 * @param src instance to be copied
 */
RCF::RCF (RCF const & src)
{
	std::cout << std::endl << "Copy RobotomyCreationForm Constructor called" << std::endl;
	*this = src;
	return ;
}

/**
 * @brief Destroy the RCF:: RCF object
 */
RCF::~RCF (void)
{
	std::cout << std::endl << "RobotomyCreationForm Destructor Called" << std::endl;
	return ;
}

RCF & RCF::operator=(RCF const & rhs)
{
	std::cout << "RobotomyCreationForm Assignment operator called" << std::endl;

	if (this != &rhs)
	{
		this->RCF::~RCF();
		*this = RCF(rhs);
	}

	return (*this);
}

void RCF::execute(Bureaucrat const & executor) const
{
	if (!this->getSign())
		throw AForm::FormCantSign();
	else if (executor.getGrade() > this->getGradeE())
		throw AForm::GradeTooLowException();
	else
	{
		for (int i = 0; i < 3; i++)
			std::cout << "**Drilling Noise**" << std::endl;
		if (rand() & 2)
			std::cout << this->getTarget() << " has successfully been Robotmized." << std::endl;
		else
			std::cout << this->getTarget() << " has failed to be Robotmized." << std::endl;
	}
}

