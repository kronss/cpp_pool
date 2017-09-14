// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ochayche <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/09/14 18:47:47 by ochayche          #+#    #+#             //
//   Updated: 2017/09/14 18:47:48 by ochayche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

Zombie::Zombie(std::string name, std::string type) : _name(name) , _type(type)
{
	std::cout << "Zombie born" <<std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie died" <<std::endl;	
}

void	Zombie::announce()
{
	std::cout << "<" << this->_name << " (" << this->_type << ")>" << " Braiiiiiiinnnssss..." << std::endl;
}
