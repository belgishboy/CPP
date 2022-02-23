/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheymans <vheymans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:54:25 by vheymans          #+#    #+#             */
/*   Updated: 2022/02/13 15:39:21 by vheymans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ph_bk.h"

void function(std::string input)
{
	if (input == "ADD")
}

int main (void)
{
	Phonebook	bk;

	while (bk.e)
	{
		std::cout << std::endl << "Enter one of the following commands: ADD, SEARCH, EXIT" << std::endl;
		function(std::cin);
	}
	return (0);
}