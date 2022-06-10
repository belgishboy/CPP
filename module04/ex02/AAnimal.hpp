
#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include "Poly.h"

// CLASS

class AAnimal
{
	public :
		AAnimal (void);							//CANONICAL: Default Constructor
		AAnimal (AAnimal const & src);			//CANONICAL: Constructor by copy
		virtual ~AAnimal (void);							//CANONICAL: Default Destructor

		AAnimal & operator=(AAnimal const & rhs);	//CANONICAL: To assign the values of one class to another

		bool operator==(AAnimal const & rhs) const;

		//**SETTERS**//

		void setType(std::string const type);
		
		//**Getters**//

		std::string getType (void) const;

		void virtual makeSound(void) const = 0;

	protected :
		std::string _type;

};

std::ostream & operator<<(std::ostream & o, AAnimal const & i);
#endif
