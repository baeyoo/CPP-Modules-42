/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobrycki <mobrycki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 16:57:29 by mobrycki          #+#    #+#             */
/*   Updated: 2021/11/10 14:56:29 by mobrycki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
	oldest_contact = 0;
}

void	PhoneBook::search_contacts()
{
	int	index;

 	std::cout << std::setw(10) << "Index"<< "|";
	std::cout << std::setw(10) << "First Name"<< "|";
	std::cout << std::setw(10) << "Last Name"<< "|";
	std::cout << std::setw(10) << "Nickname"<< "|" << std::endl;

	for (int i = 0; i < 8; i++)
	{
		if (contacts[i].is_filled())
			contacts[i].print_formatted_info(i);
	}
	std::cout << "Input the index of a contact: ";
	std::cin >> index;
	if (!index || (index < 0 || index > 8) || !(contacts[index - 1].is_filled()))
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "No contacts with that index!" << std::endl;
	}
	else
	{
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		contacts[index - 1].print_full_info();
	}
	return ;
}

void	PhoneBook::add_oldest_contact()
{
	oldest_contact %= 8;
	contacts[oldest_contact].fill_contact();
	oldest_contact++;
	return ;
}
