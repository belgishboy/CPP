/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook_class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheymans <vheymans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:09:39 by vheymans          #+#    #+#             */
/*   Updated: 2022/02/13 15:35:16 by vheymans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ph_bk.h"

Phonebook::Phonebook (void)
{
	std::cout << "Phonebook Construtor Called" << std::endl;
	Phonebook::index = 0;
	Phonebook::e = 1;

	return ;
}

Phonebook::~Phonebook (void)
{
	std::cout << "Phonebook donstrutor Called" << std::endl;

	return ;
}

void add(void)
{
	
}
void search(void);
void exit(void);
