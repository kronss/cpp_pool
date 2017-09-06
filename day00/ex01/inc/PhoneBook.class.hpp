// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PhoneBook.class.hpp                                :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ochayche <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/09/05 14:48:52 by ochayche          #+#    #+#             //
//   Updated: 2017/09/05 14:48:53 by ochayche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP 

	class PhoneBook
	{
		static const int _max_contacts = 8;
		int		_n;
		Contact contacts[_max_contacts];

	public:
		PhoneBook( void );
		~PhoneBook( void );

		int		get_nbr( void );
		void	addContact( void );
		void	showContact( void );
	};

#endif
