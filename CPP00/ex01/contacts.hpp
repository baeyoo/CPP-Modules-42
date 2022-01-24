/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobrycki <mobrycki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 16:57:02 by mobrycki          #+#    #+#             */
/*   Updated: 2021/10/29 18:43:55 by mobrycki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>

class contact
{
	public:
		contact();
		bool	is_filled(void);
		void	print_full_info(void);
		void	print_formatted_info(int i);
		void	fill_contact(void);

	private:
		void	print_formatted_field(std::string str);
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
		bool		filled;
};

#endif