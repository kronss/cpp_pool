#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <string>
# include <iostream>

# include "Victim.hpp"

	class Sorcerer
	{
		std::string		_name;
		std::string		_title;
	public:
		Sorcerer(const std::string & name, const std::string & title);
		~Sorcerer();
		Sorcerer(const Sorcerer & copy);


		Sorcerer &operator = (const Sorcerer & rhs);

		void polymorph(Victim const & obj) const;


		std::string getName() const;
		std::string getTitle() const;
	};

std::ostream &operator<<(std::ostream &o, Sorcerer const &rhs);

#endif
