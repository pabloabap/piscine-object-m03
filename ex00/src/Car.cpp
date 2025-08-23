// CABECERA!!

#include "Car.hpp"

Car::Car(void){}
Car::~Car(void){}

Car::Car(const Car& src){(void)src;}

Car&	Car::operator = (const Car& src){(void)src; return (*this);}

void	Car::start(void)
{
	this->_engine.start();
}

void	Car::stop(void)
{
	this->_engine.stop();
}

void	Car::accelerate(int speed)
{
	if (this->_engine._isOn)
		this->_speedController._accelerate(speed);
}

void	Car::shift_gears_up(void)
{
	this->_transmission.shift_gears_up();
}

void	Car::shift_gears_down(void)
{
	this->_transmission.shift_gears_down();
}

void	Car::reverse(void)
{
	if (this->_speedController._getSpeed() > 0)
	{
		this->_brake.apply_force_on_brakes(100);
		this->_speedController._accelerate(-this->_speedController._getSpeed());
	}
	this->_transmission.reverse();
}

void	Car::turn_wheel(int angle)
{
	this->_wheel.turn_wheel(angle);
}

void	Car::straighten_wheels(void)
{
	this->_wheel.straighten_wheels();
}

void	Car::apply_force_on_brakes(int force)
{
	if (force > 100)
		force = 100;
	else if (force < 0)
		force = 0;
	this->_brake.apply_force_on_brakes(force);
	this->_speedController._accelerate(- this->_speedController._getSpeed() / force / 100);
}
void	Car::apply_emergency_brakes(void)
{
	this->_brake.apply_emergency_brakes();
	this->_speedController._accelerate( - this->_speedController._getSpeed());
}

std::ostream	&operator<<(std::ostream &o, Car const &src)
{
	o << src._engine;
	return (o);
}

