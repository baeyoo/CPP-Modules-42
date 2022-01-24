/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobrycki <mobrycki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:26:57 by mobrycki          #+#    #+#             */
/*   Updated: 2021/10/07 18:38:38 by mobrycki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc, char *argv[])
{
	int N;
	std::string name;
	Zombie *horde;

	if (argc != 3)
		return (1);
	if (std::atoi(argv[1]) > 0)
	{
		N = std::atoi(argv[1]);
		name = argv[2];
		horde = zombieHorde(N, name);
		for (int i = 0; i < N; i++)
			horde[i].announce();
		delete [] horde;
	}
	else
		std::cout<<"Check your input bro.."<<std::endl;
	return (0);
}
