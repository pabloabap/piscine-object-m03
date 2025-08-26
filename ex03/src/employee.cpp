//CABECERA

# include "employee.hpp"


AEmployee::AEmployee(void) {}
AEmployee::AEmployee(const AEmployee& src) {(void)src;}
	
AEmployee& AEmployee::operator = (const AEmployee& src) {(void)src; return (*this);}
		int	_hourlyValue;

AEmployee::AEmployee(unsigned int hourlyValue, std::string name):
	_hourlyValue(hourlyValue),
	_name(name)
{}

AEmployee::~AEmployee(void) {}
