//CABECERA

# include "SpeedController.hpp"

SpeedController::SpeedController(void): _speed(0){}
SpeedController::~SpeedController(void){}
SpeedController::SpeedController(const SpeedController& src){(void)src;}

SpeedController&	SpeedController::operator = (const SpeedController& src){(void)src; return (*this);}
		
void	SpeedController::_accelerate(int speed)
{
	std::cout << "Accelerating speed from " << this->_speed << " to " << this->_speed + speed << std::endl;
	this->_speed += speed;
}

int		SpeedController::_getSpeed(void) const
{
	return ( this->_speed);
}