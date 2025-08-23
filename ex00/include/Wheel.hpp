//CABECERA!!

#ifndef WHEEL_CLASS_HPP
# define WHEEL_CLASS_HPP

# include <iostream>

class Car;

class Wheel
{
	private:
		friend class 		Car;
		static const int	MAX_ANGLE = 90;
		int					_direction;
		
		Wheel(void);
		~Wheel(void);
		Wheel(const Wheel& src);

		Wheel&	operator = (const Wheel& src);

		void			turn_wheel(int angle);
		void			straighten_wheels(void);
};

#endif
