//CABECERA

#include "employeeManagement.hpp"

EmployeeManagement::EmployeeManagement(const EmployeeManagement& src) {(void)src;}

EmployeeManagement& EmployeeManagement::operator = (const EmployeeManagement& src)
{
	(void)src;
	return (*this);
}

EmployeeManagement::EmployeeManagement(void) {}
EmployeeManagement::~EmployeeManagement(void) {}

void	EmployeeManagement::addEmployee(AEmployee* newEmployee)
{
	this->_employees.push_back(newEmployee);
}

void	EmployeeManagement::removeEmployee(AEmployee* deleteEmployee)
{
	std::vector<AEmployee*>::iterator toRemove;

	toRemove = std::find(this->_employees.begin(), this->_employees.end(), deleteEmployee);
	if (toRemove != this->_employees.end())
		this->_employees.erase(toRemove);
}

void	EmployeeManagement::executeWorkday(void)
{
	for(std::vector<AEmployee*>::iterator it = this->_employees.begin(); \
		it != this->_employees.end(); it++)
	{
		(*it)->executeWorkday();
	}
}

void	EmployeeManagement::calculatePayroll(void)
{
	for(std::vector<AEmployee*>::iterator it = this->_employees.begin(); \
		it != this->_employees.end(); it++)
	{
		(*it)->calculatePayroll();
	}
}