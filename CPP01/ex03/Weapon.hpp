/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobrycki <mobrycki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:03:20 by mobrycki          #+#    #+#             */
/*   Updated: 2021/10/08 16:58:33 by mobrycki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon 
{
	public:
		Weapon();
		Weapon(std::string type);
		~Weapon();
		const std::string &getType(void);
		void setType(std::string type);
	private:
		std::string type;
};

#endif