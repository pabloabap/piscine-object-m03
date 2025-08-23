//CABECERA 

#ifndef TRANSMISSION_CLASS_HPP
# define TRANSMISSION_CLASS_HPP

# include <iostream>

class Car;

class Transmission
{
	private:
		friend class		Car;
		static const int	MAX_GEAR = 6;
		int					_gear;
		
		Transmission(void);
		~Transmission(void);
		Transmission(const Transmission& src);
		
		Transmission&	operator = (const Transmission& src);

		void			shift_gears_up(void);
		void			shift_gears_down(void);
		void			reverse(void);
};

#endif
