#ifndef ASHAPE_CLASS_HPP
# define ASHAPE_CLASS_HPP

class AShape
{
	private:
		AShape(const AShape& src);

		AShape&	operator = (const AShape& src);
	public:
		AShape(void);
		virtual ~AShape(void);
		virtual	double	getArea(void) const = 0;
		virtual double	getPerimeter(void) const = 0;
};

#endif