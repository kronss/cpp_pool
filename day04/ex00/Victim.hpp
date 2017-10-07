#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <string>
# include <iostream>

	class Victim
	{
		std::string _name;
	public:
		Victim(const std::string &name);
		virtual ~Victim();

		Victim(const Victim &copy);
		Victim & operator = (const Victim &rhs);

		virtual void getPolymorphed() const;

		std::string getName() const;
	};

std::ostream &operator << (std::ostream & o, const Victim &rhs);

#endif
