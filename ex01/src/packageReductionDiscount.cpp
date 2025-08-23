//CABECERA

#include "packageReductionDiscount.hpp"
#include <iostream> 

PackageReductionDiscount::PackageReductionDiscount(void){}
PackageReductionDiscount::PackageReductionDiscount (const PackageReductionDiscount& src): Command() {(void)src;}
PackageReductionDiscount::~PackageReductionDiscount(void){}

PackageReductionDiscount&	PackageReductionDiscount::operator = (const PackageReductionDiscount& src){(void)src; return (*this);}

PackageReductionDiscount::PackageReductionDiscount(unsigned int client_id, std::vector<Article> articles_list):
	Command::Command(client_id, articles_list)
{}

float	PackageReductionDiscount::get_total_price(void) const
{
	typedef std::vector<Article> Articles;

	double		total_price;
	Articles	articles;

	total_price = 0;
	articles = this->get_articles();
	for(Articles::const_iterator it = articles.begin(); it != articles.end(); it++)
	{
		total_price += (it->unit_price * it->quantity);
	}
	if (total_price > 150)
		total_price -= 10;
	return (total_price);
}
