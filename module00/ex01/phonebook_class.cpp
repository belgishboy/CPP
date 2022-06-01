/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook_class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheymans <vheymans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:09:39 by vheymans          #+#    #+#             */
/*   Updated: 2022/05/25 17:53:39 by vheymans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ph_bk.h"

Phonebook::Phonebook (void)
{
	this->index = 0;
	this->e = 1;
	this->full = 0;

	return ;
}

Phonebook::~Phonebook (void)
{
	return ;
}

void Phonebook::add(void)
{
	this->book[index % 8].set_contact(index % 8);
	this->index ++;
	if (this->index == 8)
	{
		this->full = 1;
		this->index = 0;
	}

	return ;
}
void Phonebook::search(void)
{
	int i = 0;
	int limit = 0;
	std::string input;

	if (this->full == 1)
		limit = 8;
	else 
		limit = this->index;
	while (i < limit)
	{
		this->book[i].get_contact();
		i ++;
	}
	if (i > 0)
	{
		std::cout << std::endl << "Enter Index of Contact you wish to view :" << std::endl;
		std::cin >> input;
		i = std::atoi(input.c_str());
		if (i > limit || i < 0)
			std::cout << std::endl<< "Invalid Index" << std::endl;
		else
			this->book[i].get_secret();
	}
	
	return ;
}
