
#ifndef FORM_HPP
# define FORM_HPP

# include "Admin.h"

class Bureaucrat;

// CLASS

class Form
{
	public :
		Form (void);							//CANONICAL: Default Constructor
		Form (std::string const name, int const s, int const e);
		Form (Form const & src);			//CANONICAL: Constructor by copy
		~Form (void);							//CANONICAL: Default Destructor

		Form & operator=(Form const & rhs);	//CANONICAL: To assign the values of one class to another

		bool operator==(Form const & rhs) const;

		std::string getName (void) const;
		int getGradeS (void) const;
		int getGradeE (void) const;
		bool getSign(void) const;

		void beSigned(Bureaucrat const & b);

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
		bool _sign;
		int const _grade_s;
		int const _grade_e;

};

std::ostream & operator<<(std::ostream & o, Form const & i);
#endif
