
#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Harl.h"

class Harl
{
	public :
		typedef void (Harl::*HarlAction)(void);
		Harl ( void );
		~Harl ( void );
		void complain ( std::string level );
	
	private :
		void debug( void );
		void info( void );
		void warning( void );
		void error(void);
};

#endif
