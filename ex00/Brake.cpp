//CABECERA!!

#include "Brake.hpp"

Brake::Brake(void) {}
Brake::~Brake(void) {}
Brake::Brake(const Brake& src) {(void)src;}

Brake&	Brake::operator = (const Brake& src)  {(void)src; return(this);}

void 	Brake::apply_force_on_brakes(int force)
{
	std::cout << "Applying force of " << force << " to the break." << std::endl;	
}

void	Brake::apply_emergency_brakes(void)
{
	std::cout << "Emergency brakes actioned." << std::endl;
}
