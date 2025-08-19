#ifndef BRAKE_CLASS_HPP
# define BRAKE_CLASS_HPP

# include <iostream>

# include "Car.hpp"

class Brake
{
	private:
		friend class	Car;
		
		Brake(void);
		~Brake(void);
		Brake(const Brake& src);
		
		Brake&	operator = (const Brake& src);
		
		void 	apply_force_on_brakes(int force);
		void	apply_emergency_brakes(void);
}

#endif
