#include "Rectangle.hpp"

Rectangle::Rectangle(void) {}
Rectangle::Rectangle(const Rectangle& src): AShape() {(void)src;}

Rectangle& Rectangle::operator = (const Rectangle& src){(void)src; return (*this);}

bool Rectangle::_isValid(void)
{
	return ( this->_height > 0 && this->_width > 0 );
}

Rectangle::Rectangle(double height, double width):
	_height (height),
	_width (width)
{
	if (!this->_isValid())
		throw std::invalid_argument("Rectangle dimensions invalid.");
}

Rectangle::~Rectangle(void) {}

double	Rectangle::getArea(void) const
{
	return (this->_height * this->_width);
}

double Rectangle::getPerimeter(void) const
{
	return (2 * (this->_height + this->_width));
}
