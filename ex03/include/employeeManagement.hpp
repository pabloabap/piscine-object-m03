// CABECERA

#ifndef EMPLOYEE_MANAGEMENT_CLASS_HPP
# define EMPLOYEE_MANAGEMENT_CLASS_HPP

# include <vector>
# include <algorithm>

# include "employee.hpp"

class EmployeeManagement
{
	private:
		std::vector<AEmployee*>	_employees;

		EmployeeManagement(const EmployeeManagement& src);
		EmployeeManagement& operator = (const EmployeeManagement& src);
	public:
		EmployeeManagement(void);
		~EmployeeManagement(void);

		void	addEmployee(AEmployee* newEmployee);
		void	removeEmployee(AEmployee* deleteEmployee);
		void	executeWorkday(void);
		void	calculatePayroll(void);
};

#endif