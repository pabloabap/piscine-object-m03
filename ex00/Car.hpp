//CABECERA!!

#ifndef CAR_CLASS_HPP
# define CAR_CLASS_HPP

# include "Brake.hpp"
# include "Transmission.hpp"

class Car
{
	private:
		Engine			_engine;
		Transmission	_transmission;
		Wheel			_wheel;
		Brake			_brake;

		Car(const Car& src);

		Car&	operator = (const Car& src);
	
	public:
		Car(void);	
		~Car(void);	

		void	start(void);
		void	stop(void); 
		void	shift_gears_up(void);
		void	shift_gears_down(void);
		void	reverse(void);
		void	turn_wheel(int angle);
		void	straighten_wheels(void);
		void	apply_force_on_brakes(int force);
		void	apply_emergency_brakes(void);
}

class Engine
{
	private:
		friend class	Car;
		
		void			start(void) const;
		void			stop(void) const; 

		Engine(void);
		~Engine(void);
		Engine(const Engine& src);
		
		Engine&	operator = (const Engine& src);
}

#endif
