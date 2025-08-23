//CABECERA

#ifndef THUESDAY_DICOUNT_HPP
# define THUESDAY_DISCOUNT_HPP

# include "command.hpp"

class ThuesdayDiscount: public Command
{
	private:
		ThuesdayDiscount (const ThuesdayDiscount& src);

		ThuesdayDiscount& operator = (const ThuesdayDiscount& src);

	public:
		ThuesdayDiscount(void);
		ThuesdayDiscount(unsigned int client_id, std::vector<Article> articles_list);
		virtual ~ThuesdayDiscount(void);

		virtual float	get_total_price(void) const;
};

#endif