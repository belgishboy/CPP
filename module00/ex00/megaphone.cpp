/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheymans <vheymans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 10:57:45 by vheymans          #+#    #+#             */
/*   Updated: 2022/02/13 13:45:41 by vheymans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdio>
#include <cstdlib>
#include <cstring>

#include <iostream>

int	main (int argc, char **argv)
{
	char *buff;

	if (argc > 1)
	{
		buff = strdup("");
		for(int i = 1; i < argc; i ++)
		{
			buff = strcat(buff, argv[i]);
		}
		for (int i = 0; buff[i]; i ++)
		{
			buff[i] = toupper(buff[i]);
		}
	}
	else
		buff = strdup("* LOUD AND UNBEARABLE FEEDBACK NOISE *");
	std::cout << buff << std::endl;
	return (0);
}