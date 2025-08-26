//CABECERA

#ifndef	EMPLOYEE_CLASS_HPP
# define EMPLOYEE_CLASS_HPP

# include <iostream>

class AEmployee
{
	private:
		AEmployee(const AEmployee& src);
		
		AEmployee& operator = (const AEmployee& src);
	protected:
		unsigned int	_hourlyValue;
		std::string		_name;

		AEmployee(void);	
	public:
		AEmployee(unsigned int hourlyValue, std::string name);
		virtual ~AEmployee(void);

		virtual void	executeWorkday(void) = 0;
		virtual void	calculatePayroll(void) const = 0;
};

#endif