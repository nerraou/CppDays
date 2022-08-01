/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerraou <nerraou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 14:13:53 by nerraou           #+#    #+#             */
/*   Updated: 2022/08/01 13:48:22 by nerraou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char *av[])
{
	if (ac == 4)
	{
		std::ifstream ifs(av[1]);
		std::ofstream ofs("replaced.txt");
		std::string s1(av[2]);
		std::string s2(av[3]);
		std::string concat;
		char c;
		size_t i;

		while (ifs.good() && !ifs.eof())
		{
			c = ifs.get();
			concat += c;
			i = 0;
			if (c == s1[0])
			{
				i = 1;
				while (!ifs.eof() && i < s1.length())
				{
					c = ifs.get();
					concat += c;
					if (c != s1[i])
						break;
					i++;
				}
			}
			if (ifs.eof())
				break;
			if (i == s1.length())
				ofs << s2;
			else
				ofs << concat;
			concat.clear();
		}
		ifs.close();
		ofs.close();
	}

	return 0;
}