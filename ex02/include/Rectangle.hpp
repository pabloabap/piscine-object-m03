#ifndef RECTANGLE_CLASS_HPP
# define RECTANGLE_CLASS_HPP

# include <stdexcept>

# include "AShape.hpp"

class Rectangle: public AShape
{
	private:
		double	_height;
		double	_width;

		Rectangle(void);
		Rectangle(const Rectangle& src);

		Rectangle& operator = (const Rectangle& src);

		bool	_isValid(void);
	public:
		Rectangle(double height, double width);
		virtual	~Rectangle(void);

		virtual double	getArea(void) const;
		virtual double	getPerimeter(void) const;
};

#endif