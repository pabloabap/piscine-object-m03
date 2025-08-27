#ifndef DATEHEADER_CLASS_HPP
# define DATEHEADER_CLASS_HPP

# include <ctime>
# include <sstream>

# include "IHeader.hpp"

class DateHeader: public IHeader
{
	public:
		DateHeader(void) {};
		virtual std::string getHeader(void) const
		{
			time_t				now;
			struct tm			*localnow;
			char				buff[30];
			std::stringstream	header;

			time(&now);
			localnow = localtime(&now);
			strftime(buff, sizeof(buff), "%c", localnow);
			header << "[ " << buff << " ] ";
			return (header.str());
		}
		virtual ~DateHeader(void) {};
};

#endif