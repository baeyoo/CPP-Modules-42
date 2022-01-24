/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobrycki <mobrycki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 16:57:32 by mobrycki          #+#    #+#             */
/*   Updated: 2021/11/10 14:54:53 by mobrycki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contacts.hpp"
#include <iostream>

class	PhoneBook
{
	public:
		PhoneBook();
		void search_contacts(void);
		void add_oldest_contact(void);

	private:
		contact contacts[8];
		int		oldest_contact;
};

#endif