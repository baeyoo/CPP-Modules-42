/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobrycki <mobrycki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 14:32:50 by mobrycki          #+#    #+#             */
/*   Updated: 2021/10/14 14:57:08 by mobrycki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int error(const char *msg)
{
	std::cout << msg << std::endl;
	return (1);
}

int main(int argc, char *argv[])
{
	Karen Karen;
	std::string level;
	if (argc != 2)
		//return (1);
		return (error("Check the number of arguments!"));
	level = argv[1];
	Karen.complain(level);

	return (0);
}