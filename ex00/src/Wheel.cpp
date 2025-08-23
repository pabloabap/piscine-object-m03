//CABECERA!!

#include "Wheel.hpp"


Wheel::Wheel(void): _direction(0) {}
Wheel::~Wheel(void) {}
Wheel::Wheel(const Wheel& src) {(void)src;}

Wheel&	Wheel::operator = (const Wheel& src) {(void)src; return (*this);}

void	Wheel::turn_wheel(int angle)
{
	int	previousWheelsDirection;
	int	abs_direction;

	previousWheelsDirection = this->_direction;

	abs_direction = angle + this->_direction;
	if (abs_direction < 0)
		abs_direction *= -1;
	if ( abs_direction < 90 )
	{
		this->_direction += angle;
		std::cout << "Wheels direction: " << angle << " degrees." << std::endl;
	}
	else
	{

		this->_direction = (angle > 0) ? 90 : -90;
		std::cout << "CAUTION!! Don't force the direction. Direction scope is "
			<< "between -90 and 90. Direction before rotation: " << previousWheelsDirection
			<< " | Rotation wanted to apply: " << angle << " | Final wheels direction: " 
			<< this->_direction << std::endl;
	}
}
void	Wheel::straighten_wheels(void)
{
	this->_direction = 0;
	std::cout << "Wheel straightened." << std::endl;
}
