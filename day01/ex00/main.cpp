// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ochayche <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/09/14 17:11:47 by ochayche          #+#    #+#             //
//   Updated: 2017/09/14 17:12:04 by ochayche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Pony.hpp"

Pony		ponyOnTheStack(const char *str)
{
	Pony	hourse = Pony(str);
	return (hourse);
}

Pony		*ponyOnTheHeap(const char *str)
{
	Pony	*hourse = new Pony(str);
	return (hourse);
}

int			main(void)
{
	Pony	hourse1 = ponyOnTheStack("Winx_stack");
	Pony	*hourse2 = ponyOnTheHeap("Bela_heap");
	 
	hourse1.showFullData();
	hourse2->showFullData();

	delete hourse2;

	return 0;
}
