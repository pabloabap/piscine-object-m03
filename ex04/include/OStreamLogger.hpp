//CABECERA

#ifndef OSTREAMLOGGER_CLASS_HPP
# define OSTREAMLOGGER_CLASS_HPP

# include <iostream>
# include <stdexcept>

# include "ILogger.hpp"
# include "IHeader.hpp"

class OStreamLogger: public ILogger
{
	private:
		std::ostream&	_o;
		IHeader *		_header;

		OStreamLogger(void);
	public:
		OStreamLogger(std::ostream& o, IHeader *header = NULL):
			_o(o),
			_header(header)
		{};

		~OStreamLogger(void) {}

		virtual void write(std::string str)
		{

			if (!this->_o.good())
				throw std::runtime_error("Fauilure output stream logger.");
			if(this->_header != NULL)
				this->_o << this->_header->getHeader();
			this->_o <<  str << std::endl;
		};	
};

#endif