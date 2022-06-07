
#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "Poly.h"

// CLASS

class WrongCat : public WrongAnimal
{
	public :
		WrongCat (void);							//CANONICAL: Default Constructor
		WrongCat (WrongCat const & src);			//CANONICAL: Constructor by copy
		~WrongCat (void);							//CANONICAL: Default Destructor

		WrongCat & operator=(WrongCat const & rhs);	//CANONICAL: To assign the values of one class to another

		bool operator==(WrongCat const & rhs) const;

		void makeSound(void) const;

};

std::ostream & operator<<(std::ostream & o, WrongCat const & i);
#endif
