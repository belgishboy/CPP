/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook_class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheymans <vheymans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:09:39 by vheymans          #+#    #+#             */
/*   Updated: 2022/05/18 20:20:33 by vheymans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ph_bk.h"

Phonebook::Phonebook (void)
{
	std::cout << "Phonebook Construtor Called" << std::endl;
	this->index = 0;
	this->e = 1;
	this->full = 0;

	return ;
}

Phonebook::~Phonebook (void)
{
	std::cout << "Phonebook donstrutor Called" << std::endl;

	return ;
}

void Phonebook::add(void)
{
	this->book[index % 8].set_contact();
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
		limit = 7;
	else 
		limit = this->index;
	while (i <= limit)
	{
		this->book[i].get_contact();
		i ++;
	}
	std::cout << "Enter Index of Contact you wish to view :" << std::endl;
	std::cin >> input;
	i = stoi(input);
	if (i > limit || i < 0)
		std::cout << "Invalid Index" << std::endl;
	else
	{
		this->book[i].get_contact();
		this->book[i].get_secret();
	}
	
	return ;
}
