
#include "AForm.hpp"

/**
 * @brief Construct a new AForm:: AForm object
 */
AForm::AForm ( void )
	: _name("Nobody"), _sign(0), _grade_s(150), _grade_e(150)
{
	std::cout << std::endl << "Default AForm Constructor called" << std::endl;
	return ;
}

/**
 * @brief Construct a new AForm:: AForm object
 * @param s value to be assgined to _grade_s
 */
AForm::AForm (std::string const name, int const s, int const e)
	: _name(name), _sign(0), _grade_s(s), _grade_e(e)
{
	if (s < 1 || e < 1)
		throw AForm::GradeTooHighException();
	if (s > 150 || e > 150)
		throw AForm::GradeTooLowException();
	std::cout << std::endl << "Parametric AForm Constructor called" << std::endl;
	return ;
}

/**
 * @brief Construct a new AForm:: AForm object as a copy of src
 * @param src instance to be copied
 */
AForm::AForm (AForm const & src)
	: _grade_s(src.getGradeS()), _grade_e(src.getGradeE())
{
	std::cout << std::endl << "Copy AForm Constructor called" << std::endl;
	*this = src;
	return ;
}

/**
 * @brief Destroy the AForm:: AForm object
 */
AForm::~AForm (void)
{
	std::cout << std::endl << "AForm Destructor Called" << std::endl;
	return ;
}

std::string AForm::getName (void) const
{
	return (this->_name);
}

int AForm::getGradeS (void) const
{
	return (this->_grade_s);
}

int AForm::getGradeE (void) const
{
	return (this->_grade_e);
}

bool AForm::getSign (void) const
{
	return (this->_sign);
}

void AForm::beSigned(Bureaucrat const & b)
{
	if (b.getGrade() > this->_grade_s)
		throw AForm::GradeTooLowException();
	else
		this->_sign = 1;
}

char const * AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high.");
}

char const * AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low.");
}

/**
 * @brief Assigns the values of rhs to the instance
 * @param rhs values to be copied
 * @return [AForm&] ref to the instance
 */
AForm & AForm::operator=(AForm const & rhs)
{
	std::cout << std::endl << "AForm Assignment operator called" << std::endl;

	if (this != &rhs)
	{
		//this->~AForm();
		//*this = AForm(rhs);
		this->_sign = rhs.getSign();
	}

	return (*this);
}

/**
 * @brief checks if the values of two class instances are the same
 * 
 * @param rhs class instance being checked against
 * @return [true] if all members of each class are equal
 * @return [false] if not all members of each class are equal
 */
bool AForm::operator==(AForm const & rhs) const
{
	if (this->_grade_s != rhs.getGradeS())
		return (false);
	if (this->_grade_e != rhs.getGradeE())
		return (false);
	if (this->_sign != rhs.getSign())
		return (false);
	if (this->_name != rhs.getName())
		return (false);

	return (true);
}

/**
 * @brief outputs the contents of `i` into o
 * @param o out stream
 * @param i instance that will be outputted
 * @return [std::ostream&] where to be outputted
 */
std::ostream & operator<<(std::ostream & o, AForm const & i)
{
	o << i.getName() << std::endl;
	o << "Grade to be signed : " << i.getGradeS() << std::endl;
	o << "Grade to be exicuted : " << i.getGradeE() << std::endl;
	o << "Status : 🖕" << std::endl;
	return (o);
}
