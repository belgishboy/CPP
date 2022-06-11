
//INCLUDES

#include "Admin.h"
# include "PresidentialPardonForm.hpp"
# include "RobotomyCreationForm.hpp"
# include "ShrubberyCreationForm.hpp"

int main()
{
	Bureaucrat v("Vincent", 140);
	Bureaucrat h("Hendrik", 1);
	Bureaucrat k("Krisi", 50);

	AForm *p = new PPF();
	AForm *r = new RCF();
	AForm *s = new SCF();

	std::cout << v << std::endl << h << std::endl << k << std::endl;

	std::cout << *p << std::endl << *r << std::endl << *s << "\n" << std::endl;
	
	v.executeForm(*s);
	v.signForm(*s);
	v.executeForm(*s);
	k.executeForm(*s);
	std::cout<< std::endl;
	k.signForm(*r);
	k.signForm(*p);
	std::cout<< std::endl;
	h.executeForm(*r);
	h.signForm(*p);
	h.executeForm(*p);

	delete p;
	delete r;
	delete s;

	return (0);
}
