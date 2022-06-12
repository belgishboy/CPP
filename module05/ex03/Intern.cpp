
#include "Intern.hpp"

/**
 * @brief Construct a new Intern:: Intern object
 */
Intern::Intern ( void )
{
	std::cout << std::endl << "Default Intern Constructor called" << std::endl;
	return ;
}


/**
 * @brief Construct a new Intern:: Intern object as a copy of src
 * @param src instance to be copied
 */
Intern::Intern (Intern const & src)
{
	std::cout << std::endl << "Copy Intern Constructor called" << std::endl;
	*this = src;
	return ;
}

/**
 * @brief Destroy the Intern:: Intern object
 */
Intern::~Intern (void)
{
	std::cout << std::endl << "Intern Destructor Called" << std::endl;
	return ;
}

/**
 * @brief Assigns the values of rhs to the instance
 * @param rhs values to be copied
 * @return [Intern&] ref to the instance
 */
Intern & Intern::operator=(Intern const & rhs)
{
	std::cout << std::endl << "Intern Assignment operator called" << std::endl;

	if (this != &rhs)
	{
		this->Intern::~Intern();
		*this = Intern(rhs);
	}

	return (*this);
}

AForm * Intern::makeForm(std::string const name, std::string const target)
{
	AFormMake f[3] = {&Intern::makePPF, &Intern::makeRCF, &Intern::makeSCF};
	std::string l[3] = {"PPF", "RCF", "SCF"};
	for (int i = 0; i < 3; i ++)
	{
		if (name == l[i])
		{
			std::cout << "Intern creates " << l[i] << std::endl;
			return (this->*f[i])(target);
		}
	}
	throw Intern::FormDoesntExist();
	return (NULL);
}

AForm * Intern::makePPF(std::string const target)
{
	return (new PPF(target));
}
AForm * Intern::makeRCF(std::string const target)
{
	return (new RCF(target));
}
AForm * Intern::makeSCF(std::string const target)
{
	return (new SCF(target));
}


char const * Intern::FormDoesntExist::what() const throw()
{
	return ("This Form doens't exist.");
}

/**
 * @brief outputs the contents of `i` into o
 * @param o out stream
 * @param i instance that will be outputted
 * @return [std::ostream&] where to be outputted

std::ostream & operator<<(std::ostream & o, Intern const & i)
{
	o << "The value of _foo is : " << i.getFoo() << std::endl;
	return (o);
}
*/
