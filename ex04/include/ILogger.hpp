#ifndef ILOGGER_CLASS_HPP
# define ILOGGER_CLASS_HPP

#include <string>

class ILogger
{
	public:
		virtual void write(std::string str) = 0;
		virtual ~ILogger(void) {};
};

#endif