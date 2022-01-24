/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobrycki <mobrycki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:03:06 by mobrycki          #+#    #+#             */
/*   Updated: 2021/10/26 15:07:50 by mobrycki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"


class HumanA 

{
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void attack(void);
	private:
		std::string name;
		Weapon &weaponREF;
};

#endif