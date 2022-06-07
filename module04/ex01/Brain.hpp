
#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "Poly.h"

// CLASS

class Brain
{
	public :
		Brain (void);							//CANONICAL: Default Constructor
		Brain (Brain const & src);			//CANONICAL: Constructor by copy
		~Brain (void);							//CANONICAL: Default Destructor

		Brain & operator=(Brain const & rhs);	//CANONICAL: To assign the values of one class to another

		bool operator==(Brain const & rhs) const;

		//**SETTERS**//

		void setIdea(std::string const idea, int const i);
		void setIdeas(std::string const ideas[100]);
		
		//**Getters**//

		std::string getIdea(int const i) const;
		std::string const * getIdeas (void) const;

	private :
		std::string _ideas[100];

};

//USEFUL: used to output the contents of the class into a stream
std::ostream & operator<<(std::ostream & o, Brain const & i);
#endif
