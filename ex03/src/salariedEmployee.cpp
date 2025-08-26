#include "salariedEmployee.hpp"

ContractEmployee::ContractEmployee(void) {}
ContractEmployee::ContractEmployee(const ContractEmployee& src): AEmployee(){(void)src;}
ContractEmployee::~ContractEmployee(void) {}

ContractEmployee& ContractEmployee::operator=(const ContractEmployee& src) {(void)src; return (*this);}

ContractEmployee::ContractEmployee(unsigned int hourlyValue, std::string name):
	AEmployee(hourlyValue, name),
	_freeHours(0),
	_workHours(0)
{}

void	ContractEmployee::executeWorkday(void)
{
	this->_workHours += 7;
}

void	ContractEmployee::calculatePayroll(void) const
{
	unsigned int	workedHours;
	unsigned int	toPay;

	workedHours = this->_workHours - this->_freeHours;
	toPay = workedHours * this->_hourlyValue;

	std::cout << "EMPLOYEE: " << this->_name 
		<< "	|	MONTHLY PAYMENT: " << toPay << std::endl;
}

void	ContractEmployee::takeVacationsHoursBreak(int hours)
{
	this->_freeHours += hours;
}

void	ContractEmployee::takeSicknessHoursBreak(int hours)
{
	this->_freeHours += hours;
}

void	ContractEmployee::takeVacationsDaysBreak(int days)
{
	this->_freeHours += days * 7;
}

void	ContractEmployee::takeSicknessDaysBreak(int days)
{
	this->_freeHours += days * 7;
}

Apprentice::Apprentice(void) {}
Apprentice::Apprentice(const Apprentice& src): AEmployee(){(void)src;}
Apprentice::~Apprentice(void) {}

Apprentice& Apprentice::operator=(const Apprentice& src) {(void)src; return (*this);}

Apprentice::Apprentice(unsigned int hourlyValue, std::string name):
	AEmployee(hourlyValue, name),
	_freeHours(0),
	_workHours(0),
	_schoolHours(0)
{}

void	Apprentice::executeWorkday(void)
{
	this->_workHours += 7;
}

void	Apprentice::calculatePayroll(void) const
{
	unsigned int	workedHours;
	unsigned int	toPay;

	workedHours = this->_workHours - this->_freeHours - this->_schoolHours;
	toPay = workedHours * this->_hourlyValue + this->_schoolHours * this->_hourlyValue * 0.5;

	std::cout << "EMPLOYEE: " << this->_name 
		<< "	|	MONTHLY PAYMENT: " << toPay << std::endl;
}

void	Apprentice::takeSchoolHoursBreak(int hours)
{
	this->_schoolHours += hours;
}

void	Apprentice::takeVacationsHoursBreak(int hours)
{
	this->_freeHours += hours;
}

void	Apprentice::takeSicknessHoursBreak(int hours)
{
	this->_freeHours += hours;
}

void	Apprentice::takeVacationsDaysBreak(int days)
{
	this->_freeHours += days * 7;
}

void	Apprentice::takeSicknessDaysBreak(int days)
{
	this->_freeHours += days * 7;
}