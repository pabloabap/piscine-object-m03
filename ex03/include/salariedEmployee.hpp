//CABECERA

#ifndef SALARIED_EMPLOYEE_HPP
# define SALARIED_EMPLOYEE_HPP

#include "employee.hpp"

class IOutOfOffice
{
	public:
		virtual void	takeVacationsHoursBreak(int hours) = 0;
		virtual void	takeSicknessHoursBreak(int hours) = 0;
		virtual void	takeVacationsDaysBreak(int days) = 0;
		virtual void	takeSicknessDaysBreak(int days) = 0;

		virtual	~IOutOfOffice(void) {};
};

class ISchoolTime
{
	public:
		virtual void	takeSchoolHoursBreak(int hours) = 0;

		virtual	~ISchoolTime(void) {};
};

class ContractEmployee: public AEmployee, public IOutOfOffice
{
	private:
		unsigned int	_freeHours;
		unsigned int	_workHours;
		
		ContractEmployee(void);
		ContractEmployee(const ContractEmployee& src);
	protected:

	public:
		ContractEmployee(unsigned int hourlyValue, std::string name);
		~ContractEmployee(void);

		ContractEmployee& operator = (const ContractEmployee& src);

		virtual void	executeWorkday(void);
		virtual void	calculatePayroll(void) const;
		virtual void	takeVacationsHoursBreak(int hours);
		virtual void	takeSicknessHoursBreak(int hours);
		virtual void	takeVacationsDaysBreak(int days);
		virtual void	takeSicknessDaysBreak(int days);

};

class Apprentice: public AEmployee, public IOutOfOffice, public ISchoolTime
{
	private:
		unsigned int	_freeHours;
		unsigned int	_workHours;
		unsigned int	_schoolHours;
		
		Apprentice(void);
		Apprentice(const Apprentice& src);
	protected:

	public:
		Apprentice(unsigned int hourlyValue, std::string name);
		~Apprentice(void);

		Apprentice& operator=(const Apprentice& src);

		virtual void	executeWorkday(void);
		virtual void	calculatePayroll(void) const;
		virtual void	takeSchoolHoursBreak(int hours);
		virtual void	takeVacationsHoursBreak(int hours);
		virtual void	takeSicknessHoursBreak(int hours);
		virtual void	takeVacationsDaysBreak(int days);
		virtual void	takeSicknessDaysBreak(int days);
};

#endif