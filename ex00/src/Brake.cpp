//CABECERA!!

#include "Brake.hpp"

Brake::Brake(void) {}
Brake::~Brake(void) {}
Brake::Brake(const Brake& src) {(void)src;}

Brake&	Brake::operator = (const Brake& src)  {(void)src; return(*this);}

void 	Brake::apply_force_on_brakes(int force)
{
	if (force > 0 && force < 101 )
		std::cout << "Applying force of " << force << " to the break." << std::endl;
	else
		std::cout << "Applying force of " << force << " to the break." << std::endl;
	
}

void	Brake::apply_emergency_brakes(void)
{
	std::cout << "Emergency brakes actioned." << std::endl;
}
