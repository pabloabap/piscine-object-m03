// CABECERA

#include "main.hpp"

int main(void)
{
	try
	{
		std::vector<AShape *>	figures;

		figures.push_back(new Circle(1.));
//		figures.push_back(new Rectangle(1., -2.));
		figures.push_back(new Rectangle(1., 2.));
		figures.push_back(new Triangle(3., 3., 3.));
//		figures.push_back(new Triangle(3., 3., -3.));

		for (std::vector<AShape *>::const_iterator it = figures.begin();
			it != figures.end(); it++)
		{
			std::cout << "AREA: " << (*it)->getArea()
				<< " || PERIMETRO " << (*it)->getPerimeter() << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cout << "ERROR - " << e.what() << std::endl;
	}
	return (0);
}