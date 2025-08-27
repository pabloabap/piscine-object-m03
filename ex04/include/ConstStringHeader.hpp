#ifndef CONSTSTRINGHEADER_CLASS_HPP
# define CONSTSTRINGHEADER_CLASS_HPP

# include <sstream>

# include "IHeader.hpp"

class ConstStringHeader: public IHeader
{
	private:
		const std::string	_header;

		ConstStringHeader(void);
	public:
		ConstStringHeader(const std::string header): _header(header) {};

		virtual std::string getHeader(void) const
		{
			std::stringstream	header;

			header << "[ " << this->_header << " ] ";
			return (header.str());
		}
		virtual ~ConstStringHeader(void) {};
};

#endif