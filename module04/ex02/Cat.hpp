
#ifndef CAT_HPP
# define CAT_HPP

# include "Poly.h"

// CLASS

class Cat : public AAnimal
{
	public :
		Cat (void);							//CANONICAL: Default Constructor
		Cat (Cat const & src);			//CANONICAL: Constructor by copy
		~Cat (void);							//CANONICAL: Default Destructor

		Cat & operator=(Cat const & rhs);	//CANONICAL: To assign the values of one class to another

		void makeSound(void) const;
		Brain & getBrain (void);
		Brain & getBrain (void) const;

		void setIdea(std::string const idea, int const i);

		private :
			Brain * _brain;
};

std::ostream & operator<<(std::ostream & o, Cat & i);
#endif
