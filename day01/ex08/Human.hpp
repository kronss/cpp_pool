#ifndef HUMAN_HPP
# define HUMAN_HPP

#include <string>
#include <iostream>













class Human
{
private:

    void (* ptr [3])(std::string const &);

    void meleeAttack(std::string const & target);
    void rangedAttack(std::string const & target);
    void intimidatingShout(std::string const & target);
public:

    Human();
    ~Human(void);


    void action(std::string const & action_name, std::string const & target);
};


#endif //HUMAN_HPP
