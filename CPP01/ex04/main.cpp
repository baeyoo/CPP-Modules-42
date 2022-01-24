/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobrycki <mobrycki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 18:25:40 by mobrycki          #+#    #+#             */
/*   Updated: 2021/10/14 16:18:17 by mobrycki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int error(const char *msg)
{
	std::cout << msg << std::endl;
	return (1);
}

int main(int argc, char *argv[])
{
	std::string s1;
	std::string line;
	std::string buffer;
	std::string output;
	size_t		pos;

	if (argc != 4)
		return (error("Wrong number of parameters!"));
	s1 = argv[2];
	std::ifstream input(argv[1]);
	if (input.is_open())
	{
		while (getline(input, line))
		{
			buffer.append(line);
			buffer.append("\n");
		}
										//npos = Maximum value for size_t
		if ((pos = buffer.rfind("\n")) != std::string::npos)
			buffer.erase(pos, 1);
		input.close();
		output = argv[1];
		output.append(".replace");
		std::ofstream out(output);
		pos = 0;
		while ((pos = buffer.find(s1, pos)) != std::string::npos)
		{
			buffer.erase(pos, s1.length());
			buffer.insert(pos, argv[3]);
			pos++;
		}
		out << buffer;
		
	}
	else
		return (error("The file does not exist or you're missing the permissions to read it!"));
	return (0);
}
