//CABECERA

#include "main.hpp"

int main(void)
{
	std::vector<Article>	articlesList;

	for (int i = 0; i < 15; i++)
	{
		articlesList.push_back(Article(i, i * 10, 1));
	}

	std::vector<Command *>	comandas;

	comandas.push_back(new Command(0, articlesList));
	comandas.push_back(new PackageReductionDiscount(0, articlesList));
	comandas.push_back(new ThuesdayDiscount(0, articlesList));

	for (std::vector<Command *>::const_iterator it = comandas.begin(); it != comandas.end(); it++)
	{
		std::cout << "COMANDA TOTAL PRICE: " << (*it)->get_total_price() << std::endl;
		delete *it;
	}
	comandas.clear();
	
	return(0);
}