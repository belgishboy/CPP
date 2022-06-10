
#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include "Poly.h"

// CLASS

class Animal
{
	public :
		Animal (void);							//CANONICAL: Default Constructor
		Animal (Animal const & src);			//CANONICAL: Constructor by copy
		virtual ~Animal (void);							//CANONICAL: Default Destructor

		Animal & operator=(Animal const & rhs);	//CANONICAL: To assign the values of one class to another

		bool operator==(Animal const & rhs) const;

		//**SETTERS**//

		void setType(std::string const type);
		
		//**Getters**//

		std::string getType (void) const;

		void virtual makeSound(void) const;

	protected :
		std::string _type;

};

std::ostream & operator<<(std::ostream & o, Animal const & i);
#endif
