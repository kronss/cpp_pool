#ifndef PEON_HPP
# define PEON_HPP

# include <string>
# include <iostream>

# include "Victim.hpp"

	class Peon : public Victim
	{
	public:
		Peon(const std::string &name);
		~Peon();

		Peon(const Peon &copy);
		Peon & operator = (const Peon &rhs);

		void getPolymorphed() const;
	};

// std::ostream &operator << (std::ostream & o, const Peon &rhs);

#endif
