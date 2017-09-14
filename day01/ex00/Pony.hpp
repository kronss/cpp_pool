#ifndef PONY_CLASS_HPP
# define PONY_CLASS_HPP 


# include <iostream>
# include <string>


	class Pony
	{
		std::string	_name;
		int			_legs;
		int			_head;

	public:
		Pony(const char *name);
		~Pony();
		
		void	showFullData(void);

	};

#endif
