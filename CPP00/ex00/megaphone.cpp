/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobrycki <mobrycki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 12:11:43 by mobrycki          #+#    #+#             */
/*   Updated: 2021/11/03 15:29:06 by mobrycki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
		return (c - 32);
	return (c);
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

void	megaphone(int argc, char *argv[])
{
	int	i;
	int j;
	int	length;

	i = 0;
	while (++i < argc)
	{
		j = -1;
		length = ft_strlen(argv[i]);
		while (++j < length)
		{
			std::cout << (char)ft_toupper(argv[i][j]);
		}
		std::cout << " ";
	}
	std::cout << std::endl;
}

int main (int argc, char *argv[])
{
    if (argc > 1)
        megaphone(argc, argv);
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return 0;
}

