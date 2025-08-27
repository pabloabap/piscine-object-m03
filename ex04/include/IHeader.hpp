#ifndef IHEADER_CLASS_HPP
# define IHEADER_CLASS_HPP

# include <string>

class IHeader
{
	public:
		virtual std::string getHeader(void) const = 0;
		virtual ~IHeader(void) {};
};

#endif