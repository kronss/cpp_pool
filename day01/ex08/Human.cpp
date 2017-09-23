#include "Human.hpp"

ptrAr Human::ptr[3] = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};

Human::Human()
{

}

Human::~Human()
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
            (this->*Human::ptr[i])(target);
            return;
        }
    }
}
