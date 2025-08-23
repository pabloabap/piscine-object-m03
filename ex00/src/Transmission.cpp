//CABECERA!!

# include "Transmission.hpp"

Transmission::Transmission(void): _gear(0) {}
Transmission::~Transmission(void) {}
Transmission::Transmission(const Transmission& src) {(void)src;}

Transmission&	Transmission::operator = (const Transmission& src) {(void)src; return(*this);}

void			Transmission::shift_gears_up(void)
{
	if (this->_gear < this->MAX_GEAR)
	{
		this->_gear++;
		std::cout << "Shift gears up to " << this->_gear << std::endl;
	}
}

void			Transmission::shift_gears_down(void)
{
	if (this->_gear > 0)
	{
		this->_gear--;
		std::cout << "Shift gears down to " << this->_gear << std::endl;
	}
	else
	{
		std::cout << "Shift gears down not possible, currrent gear "
			<< this->_gear << std::endl;
	}
}

void			Transmission::reverse(void)
{
	this->_gear = -1;
	std::cout << "Shift reeverse." << std::endl;
}
