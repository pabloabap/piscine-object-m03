#ifndef TRIANGLE_CLASS_HPP
# define TRIANGLE_CLASS_HPP

# include <stdexcept>
# include <cmath>

# include "AShape.hpp"

class Triangle: public AShape
{
	private:
		double	_a;
		double	_b;
		double	_c;

		Triangle(void);
		Triangle(const Triangle& src);

		Triangle& operator = (const Triangle& src);

		bool	_isValid(void);
	public:
		Triangle(double a, double b, double c);
		virtual	~Triangle(void);

		virtual double	getArea(void) const;
		virtual double	getPerimeter(void) const;
};

#endif