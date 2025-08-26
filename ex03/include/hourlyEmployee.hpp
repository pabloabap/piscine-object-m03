//CABECERA

#ifndef HOURLY_EMPLOYEE_HPP
# define HOURLY_EMPLOYEE_HPP

#include "employee.hpp"

class TempWorker: public AEmployee
{
	private:
		unsigned int		_pendingHours;
		unsigned int		_workedHours;

		TempWorker(void);
		TempWorker(const TempWorker& src);
		
		TempWorker& operator = (const TempWorker& src);
	protected:

	public:
		TempWorker(unsigned int hourlyValue, std::string name);
		~TempWorker(void);

		virtual void	executeWorkday(void);
		virtual void	calculatePayroll(void) const;
		void			mobilise(unsigned int hours);
};

#endif