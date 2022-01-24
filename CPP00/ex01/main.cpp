/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobrycki <mobrycki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 16:57:20 by mobrycki          #+#    #+#             */
/*   Updated: 2021/10/29 16:57:21 by mobrycki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"

int	error(const char *msg)
{
	std::cout << msg << std::endl;
	return (1);
}

void	do_commands(void)
{
	PhoneBook	phonebook;
	std::string command;
	int			finish;
	
	finish = 0;
	while (finish == 0)
	{
		std::cout << "Use the commands ADD, SEARCH or EXIT: ";
		std::getline(std::cin, command);
		if (command == "EXIT")
			finish = 1;
		else if (command == "ADD")
			phonebook.add_oldest_contact();
		else if (command == "SEARCH")
			phonebook.search_contacts();
		else
			error("Only \"ADD\", \"SEARCH\" or \"EXIT\" commands are allowed!");
	}
}

int	main(int argc, char *argv[])
{
	if (argc > 1 || argv[1] != NULL)
		return (error("No arguments required!"));
	do_commands();
	return (0);
	
}
