
#ifndef PresidentialPardonForm_HPP
# define PresidentialPardonForm_HPP

# include "AForm.hpp"


// CLASS

class PPF : public AForm
{
	public :
		PPF (void);							//CANONICAL: Default Constructor
		PPF (std::string const target);
		PPF (PPF const & src);			//CANONICAL: Constructor by copy
		~PPF (void);							//CANONICAL: Default Destructor

		PPF & operator=(PPF const & rhs);	//CANONICAL: To assign the values of one class to another

		void execute(Bureaucrat const & executor) const;

	private :

};

//std::ostream & operator<<(std::ostream & o, PPF const & i);
#endif
