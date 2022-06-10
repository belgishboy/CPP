
#ifndef AFORM_HPP
# define AFORM_HPP

# include "Admin.h"

class Bureaucrat;

// CLASS

class AForm
{
	public :
		AForm (void);							//CANONICAL: Default Constructor
		AForm (std::string const name, int const s, int const e);
		AForm (AForm const & src);			//CANONICAL: Constructor by copy
		~AForm (void);							//CANONICAL: Default Destructor

		AForm & operator=(AForm const & rhs);	//CANONICAL: To assign the values of one class to another

		bool operator==(AForm const & rhs) const;

		virtual std::string getName (void) const = 0;
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

std::ostream & operator<<(std::ostream & o, AForm const & i);
#endif
