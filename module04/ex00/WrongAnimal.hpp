
#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

//# include "Poly.h"

// CLASS

class WrongAnimal
{
	public :
		WrongAnimal (void);							//CANONICAL: Default Constructor
		WrongAnimal (WrongAnimal const & src);			//CANONICAL: Constructor by copy
		virtual ~WrongAnimal (void);							//CANONICAL: Default Destructor

		WrongAnimal & operator=(WrongAnimal const & rhs);	//CANONICAL: To assign the values of one class to another

		bool operator==(WrongAnimal const & rhs) const;

		//**SETTERS**//
		void setType(std::string const type);
		
		//**Getters**//
		std::string getType (void) const;

		void makeSound(void) const;

	protected :
		std::string _type;

};

std::ostream & operator<<(std::ostream & o, WrongAnimal const & i);
#endif
