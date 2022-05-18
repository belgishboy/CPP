/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook_class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheymans <vheymans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:09:39 by vheymans          #+#    #+#             */
/*   Updated: 2022/05/18 19:36:49 by vheymans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ph_bk.h"

Phonebook::Phonebook (void)
{
	std::cout << "Phonebook Construtor Called" << std::endl;
	this->index = 0;
	this->e = 1;

	return ;
}

Phonebook::~Phonebook (void)
{
	std::cout << "Phonebook donstrutor Called" << std::endl;

	return ;
}

void Phonebook::add(void)
{
	this->book[index].set_contact();
	this->index ++;

	return ;
}
void Phonebook::search(void)
{
	int i = 0;

	while 
}
