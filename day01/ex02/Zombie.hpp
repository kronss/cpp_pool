// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ochayche <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/09/14 18:47:40 by ochayche          #+#    #+#             //
//   Updated: 2017/09/14 18:47:41 by ochayche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP



#include <iostream>
#include <string>


	class Zombie
	{
		std::string _name;
		std::string _type;


	public:
		Zombie(std::string name, std::string type);
		~Zombie();
		

		void	announce();

	};





#endif
