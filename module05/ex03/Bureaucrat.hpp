
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include "Admin.h"

class AForm;

// CLASS

class Bureaucrat
{
	public :
		Bureaucrat (void);							//CANONICAL: Default Constructor
		Bureaucrat (std::string const name, int const n);
		Bureaucrat (Bureaucrat const & src);			//CANONICAL: Constructor by copy
		~Bureaucrat (void);							//CANONICAL: Default Destructor

		Bureaucrat & operator=(Bureaucrat const & rhs);	//CANONICAL: To assign the values of one class to another

		bool operator==(Bureaucrat const & rhs) const;

		Bureaucrat & operator++(int);
		Bureaucrat & operator--(int);

		void setGrade(int const n);

		std::string getName (void) const;
		int getGrade (void) const;
		void signForm (AForm & f) const;
		void executeForm(AForm const & form) const;

		class GradeTooHighException : public std::exception
		{
			public :
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public :
				virtual const char* what() const throw();
		};

	private :
		std::string const _name;
		int _grade;

};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & i);
#endif
