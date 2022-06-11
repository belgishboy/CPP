
#ifndef ROBOTOMYCREATIONFORM_HPP
# define ROBOTOMYCREATIONFORM_HPP

# include "AForm.hpp"

// CLASS

class RCF : public AForm
{
	public :
		RCF (void);							//CANONICAL: Default Constructor
		RCF (std::string const target);
		RCF (RCF const & src);			//CANONICAL: Constructor by copy
		~RCF (void);							//CANONICAL: Default Destructor

		RCF & operator=(RCF const & rhs);	//CANONICAL: To assign the values of one class to another

		void execute(Bureaucrat const & executor) const;

	private :

};

//std::ostream & operator<<(std::ostream & o, RCF const & i);
#endif
