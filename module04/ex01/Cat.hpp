
#ifndef CAT_HPP
# define CAT_HPP

# include "Poly.h"

// CLASS

class Cat : public Animal
{
	public :
		Cat (void);							//CANONICAL: Default Constructor
		Cat (Cat const & src);			//CANONICAL: Constructor by copy
		~Cat (void);							//CANONICAL: Default Destructor

		Cat & operator=(Cat const & rhs);	//CANONICAL: To assign the values of one class to another

		bool operator==(Cat const & rhs) const;

		void makeSound(void) const;

		private :
			Brain * _brain;
};

std::ostream & operator<<(std::ostream & o, Cat const & i);
#endif
