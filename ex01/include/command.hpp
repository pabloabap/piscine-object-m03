//CABECERA

#ifndef COMMAND_CLASS_HPP
# define COMMAND_CLASS_HPP

# include <vector>
# include <ctime>

struct	Article
{
	unsigned int		article_id;
	double				unit_price;
	unsigned int		quantity;

	Article(unsigned int a_id, double u_price, unsigned int q);
};

class Command
{
	private:
		static unsigned int		_id_generator;
		unsigned int			_id;
		unsigned int			_client_id; //client id
		std::vector<Article>	_articles;
		struct tm *				_date;
		
	protected:
		Command(void);
		
		Command&	operator = (const Command& src);	
		
		const std::vector<Article>&	get_articles(void) const;
		const struct tm *				get_date(void) const;
		
	public:
		Command (const Command& src);
		Command(unsigned int client_id, std::vector<Article> articles_list);
		virtual ~Command(void);

		virtual float	get_total_price(void) const;
};

# endif