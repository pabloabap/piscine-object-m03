//CABECERA

#ifndef SPEEDCONTROLLER_CLASS_HPP
# define SPEEDCONTROLLER_CLASS_HPP

# include <iostream>

class Car;

class SpeedController
{
	private:
		friend class	Car;
		int	_speed;

		SpeedController(void);
		~SpeedController(void);
		SpeedController(const SpeedController& src);

		SpeedController&	operator = (const SpeedController& src);
		
		void	_accelerate(int speed);
		int		_getSpeed(void) const;
};

#endif