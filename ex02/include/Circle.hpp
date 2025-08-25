#ifndef CIRCLE_CLASS_HPP
# define CIRCLE_CLASS_HPP

# include <cmath>
# include <stdexcept>

# include "AShape.hpp"

class Circle: public AShape
{
	private:
		double	_radius;

		Circle(void);
		Circle(const Circle& src);

		Circle& operator = (const Circle& src);

		bool	_isValid(void);
	public:
		Circle(double radius);
		virtual	~Circle(void);

		virtual double	getArea(void) const;
		virtual double	getPerimeter(void) const;
};

#endif