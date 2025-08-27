//CABECERA

#include "../include/main.hpp"

int main(void)
{
	std::vector<ILogger*>	loggers;
	std::list<std::string>	logs;
	DateHeader				d;
	ConstStringHeader		c("STRING");

	try
	{
		loggers.push_back(new FileLogger("./FnH.txt"));
		loggers.push_back(new FileLogger("./F&D.txt", &d));
		loggers.push_back(new FileLogger("./F&S.txt", &c));
		loggers.push_back(new OStreamLogger(std::cout));
		loggers.push_back(new OStreamLogger(std::cout, &d));
		loggers.push_back(new OStreamLogger(std::cout, &c));

		logs.push_back("Log 1");
		logs.push_back("Log 2");
		logs.push_back("Log 3");

		for (std::vector<ILogger*>::const_iterator it = loggers.begin(); it != loggers.end(); it++)
		{
			for (std::list<std::string>::const_iterator itt = logs.begin(); itt != logs.end(); itt++)
			{
				(*it)->write(*itt);			
			}
		}
	}
	catch ( std::exception &e)
	{
		std::cout << "[ERROR] - " << e.what() << std::endl;
	}
	for (std::vector<ILogger*>::const_iterator it = loggers.begin(); it != loggers.end(); it++)
	{
		delete *it;	
	}
	loggers.clear();

	return (0);
}