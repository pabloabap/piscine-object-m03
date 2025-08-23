//CABECERA

#include "main.hpp"

int main(void)
{
	Car	MyCar;

	MyCar.start();
	MyCar.accelerate(50);
	MyCar.stop();
	MyCar.shift_gears_down();
	MyCar.shift_gears_up();
	MyCar.reverse();
	MyCar.turn_wheel(50);
	MyCar.straighten_wheels();
	MyCar.apply_force_on_brakes(10);
	MyCar.apply_emergency_brakes();
	std::cout << MyCar << std::endl;
}