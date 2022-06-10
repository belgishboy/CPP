
#include "Form.hpp"

/**
 * @brief Construct a new Form:: Form object
 */
Form::Form ( void )
	: _name("Nobody"), _sign(0), _grade_s(150), _grade_e(150)
{
	std::cout << std::endl << "Default Form Constructor called" << std::endl;
	return ;
}

/**
 * @brief Construct a new Form:: Form object
 * @param s value to be assgined to _grade_s
 */
Form::Form (std::string const name, int const s, int const e)
	: _name(name), _sign(0), _grade_s(s), _grade_e(e)
{
	if (s < 1 || e < 1)
		throw Form::GradeTooHighException();
	if (s > 150 || e > 150)
		throw Form::GradeTooLowException();
	std::cout << std::endl << "Parametric Form Constructor called" << std::endl;
	return ;
}

/**
 * @brief Construct a new Form:: Form object as a copy of src
 * @param src instance to be copied
 */
Form::Form (Form const & src)
	: _grade_s(src.getGradeS()), _grade_e(src.getGradeE())
{
	std::cout << std::endl << "Copy Form Constructor called" << std::endl;
	*this = src;
	return ;
}

/**
 * @brief Destroy the Form:: Form object
 */
Form::~Form (void)
{
	std::cout << std::endl << "Form Destructor Called" << std::endl;
	return ;
}

std::string Form::getName (void) const
{
	return (this->_name);
}

int Form::getGradeS (void) const
{
	return (this->_grade_s);
}

int Form::getGradeE (void) const
{
	return (this->_grade_e);
}

bool Form::getSign (void) const
{
	return (this->_sign);
}

void Form::beSigned(Bureaucrat const & b)
{
	if (b.getGrade() > this->_grade_s)
		throw Form::GradeTooLowException();
	else
		this->_sign = 1;
}

char const * Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high.");
}

char const * Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low.");
}

/**
 * @brief Assigns the values of rhs to the instance
 * @param rhs values to be copied
 * @return [Form&] ref to the instance
 */
Form & Form::operator=(Form const & rhs)
{
	std::cout << std::endl << "Form Assignment operator called" << std::endl;

	if (this != &rhs)
	{
		this->~Form();
		*this = Form(rhs);
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
bool Form::operator==(Form const & rhs) const
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
std::ostream & operator<<(std::ostream & o, Form const & i)
{
	o << i.getName() << std::endl;
	o << "Grade to be signed : " << i.getGradeS() << std::endl;
	o << "Grade to be exicuted : " << i.getGradeE() << std::endl;
	o << "Status : 🖕" << std::endl;
	return (o);
}
