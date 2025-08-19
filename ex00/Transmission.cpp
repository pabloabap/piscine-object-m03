//CABECERA!!

# include "Transmission.hpp"

void			Transmission::shift_gears_up(void)
{
	std::cout << "Shift gears up." << std::endl;
}

void			Transmission::shift_gears_down(void)
{
	std::cout << "Shift gears down." << std::endl;
}

void			Transmission::reverse(void)
{
	std::cout << "Shift reeverse." << std::endl;
}

Transmission::Transmission(void) {}
Transmission::~Transmission(void) {}
Transmission::Transmission(const Transmission& src) {(void)src;}

Transmission&	Transmission::operator = (const Transmission& src) {(void)src; return(*this)}
