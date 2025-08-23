//CABECERA

#ifndef PACKAGE_REDUCTION_DISCOUNT_HPP
# define PACKAGE_REDUCTION_DISCOUNT_HPP

# include "command.hpp"

class PackageReductionDiscount: public Command
{
	private:
		PackageReductionDiscount (const PackageReductionDiscount& src);

		PackageReductionDiscount& operator = (const PackageReductionDiscount& src);

	public:
		PackageReductionDiscount(void);
		virtual ~PackageReductionDiscount(void);

		PackageReductionDiscount(unsigned int client_id, std::vector<Article> articles_list);

		virtual float	get_total_price(void) const;
};

#endif