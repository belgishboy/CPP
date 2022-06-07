
#ifndef DOG_HPP
# define DOG_HPP

# include "Poly.h"

// CLASS

class Dog : public Animal
{
	public :
		Dog (void);							//CANONICAL: Default Constructor
		Dog (Dog const & src);			//CANONICAL: Constructor by copy
		~Dog (void);							//CANONICAL: Default Destructor

		Dog & operator=(Dog const & rhs);	//CANONICAL: To assign the values of one class to another

		bool operator==(Dog const & rhs) const;

		void makeSound(void) const;

};

std::ostream & operator<<(std::ostream & o, Dog const & i);
#endif
