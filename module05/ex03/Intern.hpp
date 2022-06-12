
#ifndef INTERN_HPP
# define INTERN_HPP

# include "Admin.h"
# include "PresidentialPardonForm.hpp"
# include "RobotomyCreationForm.hpp"
# include "ShrubberyCreationForm.hpp"

// CLASS

class Intern
{
	public :
		Intern (void);							//CANONICAL: Default Constructor
		Intern (Intern const & src);			//CANONICAL: Constructor by copy
		~Intern (void);							//CANONICAL: Default Destructor

		Intern & operator=(Intern const & rhs);	//CANONICAL: To assign the values of one class to another

		typedef AForm * (Intern::*AFormMake)(std::string const target);
		AForm * makeForm(std::string const name, std::string const target);
		
		AForm * makePPF(std::string const target);
		AForm * makeRCF(std::string const target);
		AForm * makeSCF(std::string const target);

		class FormDoesntExist : public std::exception
		{
			public :
				virtual const char* what() const throw();
		};
	private :

};

//std::ostream & operator<<(std::ostream & o, Intern const & i);
#endif
