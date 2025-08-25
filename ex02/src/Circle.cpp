#include "Circle.hpp"

Circle::Circle(void) {}
Circle::Circle(const Circle& src): AShape() {(void)src;}

Circle& Circle::operator = (const Circle& src){(void)src; return (*this);}

bool Circle::_isValid(void)
{
	return (this->_radius > 0);
}

Circle::Circle(double radius):
	_radius (radius)
{
	if (!this->_isValid())
		throw std::invalid_argument("Circle radius invalid.");
}

Circle::~Circle(void) {}

double	Circle::getArea(void) const
{
	return (M_PI * this->_radius * this->_radius);
}

double Circle::getPerimeter(void) const
{
	return (2 * M_PI * this->_radius);
}
