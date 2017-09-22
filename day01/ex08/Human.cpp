#include "Human.hpp"

Human::Human()
{
    ptr = {meleeAttack, rangedAttack, intimidatingShout};
}

Human::~Human(void)
{

}

void Human::meleeAttack(std::string const & target)
{
    std::cout << "Human attack => " << target << std::endl;
}

void Human::rangedAttack(std::string const & target)
{
    std::cout << "Human ranged attack => " << target << std::endl;
}

void Human::intimidatingShout(std::string const & target)
{
    std::cout << "Human intimidating shout => " << target << std::endl;
}





void Human::action(std::string const & action_name, std::string const & target)
{
    std::string actionsStr[] = {"meleeAttack", "rangedAttack", "intimidatingShout"};

    for (int i = 0; i < 3; ++i) {
        if (action_name == actionsStr[i])
        {
            this->ptr[i](target);
            return;
        }
    }

}
