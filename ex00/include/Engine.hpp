
#ifndef ENGINE_CLASS_HPP
# define ENGINE_CLASS_HPP

# include <iostream>

class Car;

class Engine
{
	private:
		friend class	Car;
		
		bool	_isOn;
		
		Engine(void);
		~Engine(void);
		Engine(const Engine& src);
		
		Engine&	operator = (const Engine& src);
		
		void			start(void);
		void			stop(void); 
	
	public:
		bool			getStatus(void) const;
};

std::ostream &operator << (std::ostream& o, const Engine& src);

#endif