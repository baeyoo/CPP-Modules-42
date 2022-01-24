/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobrycki <mobrycki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:15:25 by mobrycki          #+#    #+#             */
/*   Updated: 2021/10/06 16:15:26 by mobrycki         ###   ########.fr       */
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

Zombie *newZombie(std::string name);
void	randomChump(std::string name);

#endif