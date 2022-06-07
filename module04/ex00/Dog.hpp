
#ifndef DOG_HPP
# define DOG_HPP

//# include "Ploy.h"

// CLASS

class Dog
{
	public :
		Dog (void);							//CANONICAL: Default Constructor
		Dog (Dog const & src);			//CANONICAL: Constructor by copy
		~Dog (void);							//CANONICAL: Default Destructor

		Dog & operator=(Dog const & rhs);	//CANONICAL: To assign the values of one class to another

		bool operator==(Dog const & rhs) const;

		//**SETTERS**//
		void setType(std::string const type);
		
		//**Getters**//
		std::string getType (void) const;

	protected :
		std::string _type;

};

std::ostream & operator<<(std::ostream & o, Dog const & i);
#endif
