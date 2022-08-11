
#ifndef DOG_HPP
# define DOG_HPP

# include "Poly.h"

// CLASS

class Dog : public AAnimal
{
	public :
		Dog (void);							//CANONICAL: Default Constructor
		Dog (Dog const & src);			//CANONICAL: Constructor by copy
		~Dog (void);							//CANONICAL: Default Destructor

		Dog & operator=(Dog const & rhs);	//CANONICAL: To assign the values of one class to another

		void makeSound(void) const;
		Brain & getBrain (void);
		Brain & getBrain (void) const;

		void setIdea(std::string const idea, int const i);

		private :
			Brain * _brain;
};

std::ostream & operator<<(std::ostream & o, Dog & i);
#endif
