//CABECERA

#include "hourlyEmployee.hpp"

TempWorker::TempWorker(void) {}
TempWorker::TempWorker(const TempWorker& src): AEmployee() {(void)src;}
TempWorker& TempWorker::operator = (const TempWorker& src) {(void)src; return(*this);}
TempWorker::TempWorker(unsigned int hourlyValue, std::string name):
	AEmployee(hourlyValue, name)
{}

TempWorker::~TempWorker(void) {}

void TempWorker::executeWorkday(void)
{
	if (this->_pendingHours >= 7)
	{
		this->_workedHours += 7;
		this->_pendingHours -= 7;
	}
	else
	{
		this->_workedHours += this->_pendingHours;
		this->_pendingHours = 0;
	}
}

void TempWorker::mobilise(unsigned int hours)
{
	this->_pendingHours += hours;
}

void	TempWorker::calculatePayroll(void) const
{
	std::cout << "EMPLOYEE: " << this->_name 
		<< "	|	MONTHLY PAYMENT: " 
		<< this->_hourlyValue * this->_workedHours << std::endl;
}