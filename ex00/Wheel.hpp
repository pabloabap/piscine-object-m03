//CABECERA!!

#ifndef WHEEL_CLASS_HPP
# define WHEEL_CLASS_HPP

# include "Car.hpp"

class Wheel
{
	private:
		friend class Car;
		
		Wheel(void);
		~Wheel(void);
		Wheel(const Wheel& src);

		Wheel&	operator = (const Wheel& src);

		void			turn_wheel(int angle);
		void			straighten_wheels(void);
}

#endif
