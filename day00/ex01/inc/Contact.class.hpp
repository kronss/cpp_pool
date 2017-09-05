// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Contact.class.hpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ochayche <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2017/09/05 16:26:52 by ochayche          #+#    #+#             //
//   Updated: 2017/09/05 16:26:53 by ochayche         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP 

	class Contact
	{
		char	first_name[64];
		char	last_name[64];
		char	nickname[64];
		char	login[64];
		char	postal_address[64];
		char	email_address[64];
		char	phone_number[64];
		char	birthday_date[64];
		char	favorite_meal[64];
		char	underwear_color[64];
		char	darkest_secret[64];
		
	public:
		Contact( void );
		~Contact( void );

	};

#endif
