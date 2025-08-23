//CABECERA

# include "command.hpp"

Article::Article(unsigned int a_id, double u_price, unsigned int q):
	article_id(a_id), unit_price(u_price), quantity(q)
{}

unsigned int Command::_id_generator = 0;

Command::Command(void){}
Command::Command (const Command& src)
{
	this->_id = src._id;
	this->_client_id = src._client_id; //client id
	this->_articles = src._articles;
	this->_date = src._date;
}
Command::~Command(void){}

Command&	Command::operator = (const Command& src){(void)src; return (*this);}

Command::Command(unsigned int client_id, std::vector<Article> articles_list):
	_id(Command::_id_generator++)
	, _client_id(client_id)
	, _articles(articles_list)
	, _date(0)
{
	time_t		timer;

	time(&timer);
	_date = localtime(&timer);
	_date->tm_mday = 19;
	timer = mktime(this->_date);
	_date = localtime(&timer);
}

float	Command::get_total_price(void) const
{
	double	total_price;

	total_price = 0;
	for(std::vector<Article>::const_iterator it = this->_articles.begin()
		; it != this->_articles.end(); it++)
	{
		total_price += (it->unit_price * it->quantity);
	}
	return (total_price);
}

const std::vector<Article>&	Command::get_articles(void) const
{
	return (this->_articles);
}

const struct tm *				Command::get_date(void) const
{
	return(this->_date);
}

