/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobrycki <mobrycki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 16:56:59 by mobrycki          #+#    #+#             */
/*   Updated: 2021/11/10 15:18:32 by mobrycki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contacts.hpp"

contact::contact()
{
	filled = false;
}

bool	contact::is_filled(void)
{
	return (filled);
}

void	contact::print_full_info(void)
{
	std::cout << "First name     :" << first_name << std::endl;
	std::cout << "Last name      :" << last_name << std::endl;
	std::cout << "Nickname       :" << nickname << std::endl;
	std::cout << "Phone number   :" << phone_number << std::endl;
	std::cout << "Darkest secret :" << darkest_secret << std::endl;
}

void	contact::print_formatted_field(std::string str)
{
	if (str.length() > 10)
		std::cout << std::setw(10) << str.substr(0, 9).append(".") << "|";
	else
		std::cout << std::right << std::setfill(' ') << std::setw(10) << str << "|";
	return ;
}

void	contact::print_formatted_info(int i)
{
	std::cout << "         " << i + 1 << "|";
	print_formatted_field(first_name);
	print_formatted_field(last_name);
	print_formatted_field(nickname);
	std::cout << std::endl;
	return ;
}

void	contact::fill_contact(void)
{
	std::cout << "Input contact's first name:" << std::endl;
	std::getline(std::cin, first_name);
	std::cout << "Input contact's last name:" << std::endl;
	std::getline(std::cin, last_name);
	std::cout << "Input contact's nickname:" << std::endl;
	std::getline(std::cin, nickname);
	std::cout << "Input contact's phone number:" << std::endl;
	std::getline(std::cin, phone_number);
	std::cout << "Input contact's darkest secret:" << std::endl;
	std::getline(std::cin, darkest_secret);
	filled = true;
	return ;
}
