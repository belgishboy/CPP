
#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"

// CLASS

class SCF : public AForm
{
	public :
		SCF (void);							//CANONICAL: Default Constructor
		SCF (std::string const target);
		SCF (SCF const & src);			//CANONICAL: Constructor by copy
		~SCF (void);							//CANONICAL: Default Destructor

		SCF & operator=(SCF const & rhs);	//CANONICAL: To assign the values of one class to another

		void execute(Bureaucrat const & executor) const;

	private :

};

//std::ostream & operator<<(std::ostream & o, SCF const & i);
#endif
