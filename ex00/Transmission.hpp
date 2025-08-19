//CABECERA 

#ifndef TRANSMISSION_CLASS_HPP
# define TRANSMISSION_CLASS_HPP

# include <iostream>

# include "Car.hpp"

class Transmission
{
	private:
		friend class	Car;

		void			shift_gears_up(void);
		void			shift_gears_down(void);
		void			reverse(void);

		Transmission(void);
		~Transmission(void);
		Transmission(const Transmission& src);
		
		Transmission&	operator = (const Transmission& src);
}

#endif
