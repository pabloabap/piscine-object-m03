//CABECERA!!

#include "Wheel.hpp"


Wheel::Wheel(void) {}
Wheel::~Wheel(void) {}
Wheel::Wheel(const Wheel& src) {(void)src;}

Wheel&	Wheel::operator = (const Wheel& src) {(void)src; return (*this);}

void	Wheel::turn_wheel(int angle)
{
	std::cout << "Wheel turned " << angle << " degrees." << std::endl;
}
void	Wheel::straighten_wheels(void)
{
	std::cout << "Wheel straightened." << std::endl;
}
