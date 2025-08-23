//CABECERA

# include "thuesdayDiscount.hpp"

ThuesdayDiscount::ThuesdayDiscount(void){}
ThuesdayDiscount::ThuesdayDiscount (const ThuesdayDiscount& src): Command(){(void)src;}
ThuesdayDiscount::~ThuesdayDiscount(void){}

ThuesdayDiscount&	ThuesdayDiscount::operator = (const ThuesdayDiscount& src){(void)src; return (*this);}

ThuesdayDiscount::ThuesdayDiscount(unsigned int client_id, std::vector<Article> articles_list):
	Command::Command(client_id, articles_list)
{}

float	ThuesdayDiscount::get_total_price(void) const
{
	typedef std::vector<Article> Articles;

	double		total_price;
	const struct tm * date;
	Articles	articles;

	total_price = 0;
	date = this->get_date();
	articles = this->get_articles();
	for(Articles::const_iterator it = articles.begin(); it != articles.end(); it++)
	{
		double	newItem;

		newItem = it->unit_price * it->quantity;
		if (date->tm_wday == 2)
			newItem -= (newItem * 0.1);
		total_price += newItem;
	}
	return (total_price);
}
