
#include "Bureaucrat.hpp"

/**
 * @brief Construct a new Bureaucrat:: Bureaucrat object
 */
Bureaucrat::Bureaucrat ( void ): _name("Nobody"), _grade(150)
{
	std::cout << std::endl << "Default Bureaucrat Constructor called" << std::endl;
	return ;
}

/**
 * @brief Construct a new Bureaucrat:: Bureaucrat object
 * @param n value to be assgined to _grade
 */
Bureaucrat::Bureaucrat (std::string const name, int const n) : _name(name), _grade(n)
{
	if (n < 1)
		throw Bureaucrat::GradeTooHighException();
	if (n > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << std::endl << "Parametric Bureaucrat Constructor called" << std::endl;
	return ;
}

/**
 * @brief Construct a new Bureaucrat:: Bureaucrat object as a copy of src
 * @param src instance to be copied
 */
Bureaucrat::Bureaucrat (Bureaucrat const & src)
{
	std::cout << std::endl << "Copy Bureaucrat Constructor called" << std::endl;
	*this = src;
	return ;
}

/**
 * @brief Destroy the Bureaucrat:: Bureaucrat object
 */
Bureaucrat::~Bureaucrat (void)
{
	std::cout << std::endl << "Bureaucrat Destructor Called" << std::endl;
	return ;
}

Bureaucrat & Bureaucrat::operator++(int)
{
	if (this->_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade --;

	return (*this);
}

Bureaucrat & Bureaucrat::operator--(int)
{
	if (this->_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade ++;

	return (*this);
}

void Bureaucrat::setGrade(int const n)
{
	this->_grade = n;

	return ;
}

std::string Bureaucrat::getName (void) const
{
	return (this->_name);
}

int Bureaucrat::getGrade (void) const
{
	return (this->_grade);
}

void Bureaucrat::signForm (Form & f) const
{
	try
	{
		f.beSigned(*this);
	}
	catch (Form::GradeTooLowException& e)
	{
		std::cerr << this->getName() << " couldn't sign " << f.getName() << " because " << e.what() << std::endl;
		return ;
	}
	std::cout << this->getName() << " signed " << f.getName() << std::endl;
}

char const * Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high. Must be 1 or lower.");
}

char const * Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low. Must be 150 or higher.");
}

/**
 * @brief Assigns the values of rhs to the instance
 * @param rhs values to be copied
 * @return [Bureaucrat&] ref to the instance
 */
Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs)
{
	std::cout << std::endl << "Bureaucrat Assignment operator called" << std::endl;

	if (this != &rhs)
	{
		this->_grade = rhs.getGrade();
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
bool Bureaucrat::operator==(Bureaucrat const & rhs) const
{
	if (this->_grade != rhs.getGrade())
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
std::ostream & operator<<(std::ostream & o, Bureaucrat const & i)
{
	o << i.getName() << ", bureaucrat grade : " << i.getGrade() << std::endl;
	return (o);
}
