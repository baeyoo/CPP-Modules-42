/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobrycki <mobrycki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 18:45:40 by mobrycki          #+#    #+#             */
/*   Updated: 2021/10/07 15:29:36 by mobrycki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <iomanip>

class Zombie
{
	public:
					Zombie();
					Zombie( std::string name );
					~Zombie( void );
		std::string	getName( void ) const;
		void		setName( std::string name );
		void		announce( void ) const;
	private:
		std::string name;
};

Zombie * newZombie(std::string name);
Zombie * zombieHorde(int N, std::string name);

#endif