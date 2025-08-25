#include "Triangle.hpp"

Triangle::Triangle(void) {}
Triangle::Triangle(const Triangle& src): AShape() {(void)src;}

Triangle& Triangle::operator = (const Triangle& src){(void)src; return (*this);}

bool Triangle::_isValid(void)
{
	return (
		this->_a > 0 && this->_b > 0 && this->_c > 0
		&& (this->_a + this->_b > this->_c)
		&& (this->_b + this->_c > this->_a)
		&& (this->_c + this->_a > this->_b)
	);
}

Triangle::Triangle(double a, double b, double c):
	_a (a),
	_b (b),
	_c (c)
{
	if (!this->_isValid())
		throw std::invalid_argument("Triangle dimensions invalid.");
}

Triangle::~Triangle(void) {}

double	Triangle::getArea(void) const
{
	double	s;

	s = this->getPerimeter() / 2;
	return (sqrt(s * (s - this->_a) * (s - this->_b) * (s - this->_c)));
}

double Triangle::getPerimeter(void) const
{
	return (this->_a + this->_b + this->_c);
}
