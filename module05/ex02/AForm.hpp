
#ifndef AFORM_HPP
# define AFORM_HPP

# include "Admin.h"

class Bureaucrat;

// CLASS

class AForm
{
	public :
		AForm (void);							//CANONICAL: Default Constructor
		AForm (std::string const name, int const s, int const e, std::string const target);
		AForm (AForm const & src);			//CANONICAL: Constructor by copy
		virtual ~AForm (void);							//CANONICAL: Default Destructor

		AForm & operator=(AForm const & rhs);	//CANONICAL: To assign the values of one class to another

		bool operator==(AForm const & rhs) const;

		virtual std::string getName (void) const;
		int getGradeS (void) const;
		int getGradeE (void) const;
		bool getSign(void) const;
		std::string const getTarget(void) const;

		void beSigned(Bureaucrat const & b);
		virtual void execute(Bureaucrat const & executor) const = 0;
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
		class FormCantSign : public std::exception
		{
			public :
				virtual const char* what() const throw();
		};

	private :
		std::string const _name;
		bool _sign;
		int const _grade_s;
		int const _grade_e;
		std::string const _target;

};

std::ostream & operator<<(std::ostream & o, AForm const & i);
#endif
