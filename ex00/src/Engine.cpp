
#include "Engine.hpp"

Engine::Engine(void): _isOn(false) {}
Engine::~Engine(void) {}
Engine::Engine(const Engine& src) {(void)src;}
Engine&	Engine::operator = (const Engine& src) {(void) src; return (*this);}

void	Engine::start(void) 
{ 
	if ( !this->_isOn )
	{
		this->_isOn = true;
		std::cout << "Engine started" << std::endl;
	}
}

void	Engine::stop(void)
{ 
	if ( this->_isOn )
	{
		this->_isOn = false;
		std::cout << "Engine stoped" << std::endl;
	}
}

bool			Engine::getStatus(void) const
{
	return (this->_isOn);
}


std::ostream &operator << (std::ostream& o, const Engine& src)
{
	o << "ENGINE STATUS - " << src.getStatus() << std::endl;
	return (o);
}
