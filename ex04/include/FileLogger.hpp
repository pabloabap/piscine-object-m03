//CABECERA

#ifndef FILELOGGER_CLASS_HPP
# define FILELOGGER_CLASS_HPP

# include <fstream>
# include <stdexcept>

# include "ILogger.hpp"
# include "IHeader.hpp"

class FileLogger: public ILogger
{
	private:
		std::ofstream	_file;
		IHeader *		_header;

		FileLogger(void);
	public:
		FileLogger(const std::string& file, IHeader *header = NULL):
			_file(file.c_str()),
			_header(header)
		{};

		~FileLogger(void) {this->_file.close();}

		virtual void write(std::string str)
		{
			if (!this->_file.is_open())
				throw std::runtime_error("Fauilure opening logger file.");
			if(this->_header != NULL)
				this->_file << this->_header->getHeader();
			this->_file <<  str << std::endl;
		};
};

#endif