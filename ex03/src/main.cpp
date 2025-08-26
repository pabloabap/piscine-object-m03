//CABECERA

#include "main.hpp"

int main(void)
{
	EmployeeManagement	manager;
	TempWorker*			tmp = new TempWorker(15, "Temporero1");
	TempWorker*			tmp2 = new TempWorker(15, "Temporero2");
	ContractEmployee*	c1 = new ContractEmployee(10, "Contractor1");
	ContractEmployee*	c2 = new ContractEmployee(10, "Contractor2");;
	Apprentice*			a1 = new Apprentice(5, "Apprentice1");
	Apprentice*			a2 = new Apprentice(5, "Apprentice2");
	
	tmp->mobilise(280);
	manager.addEmployee(tmp);
	tmp2->mobilise(70);
	manager.addEmployee(tmp2);
	manager.addEmployee(c1);
	manager.addEmployee(c2);
	manager.addEmployee(a1);
	manager.addEmployee(a2);

	c1->takeSicknessDaysBreak(1);
	c1->takeSicknessHoursBreak(3);
	c1->takeVacationsDaysBreak(5);
	a1->takeSicknessDaysBreak(1);
	a1->takeSicknessHoursBreak(3);
	a1->takeVacationsDaysBreak(5);
	a1->takeSchoolHoursBreak(70);

	for (int i = 0; i < 20; i++)
		manager.executeWorkday();
	manager.calculatePayroll();
	manager.removeEmployee(tmp);
	std::cout << "Primer temporero despedido" << std::endl;
	manager.calculatePayroll();
	delete tmp;
	delete tmp2;
	delete c1;
	delete c2;
	delete a1;
	delete a2;
	
	return (0);
}