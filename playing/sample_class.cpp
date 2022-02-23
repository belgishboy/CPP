/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sample_class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheymans <vheymans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 13:58:11 by vheymans          #+#    #+#             */
/*   Updated: 2022/02/13 14:04:42 by vheymans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "sample_class.hpp"

Sample::Sample( void )
{
	std::cout << "Constructor called " << std::endl;
	return ;
}

Sample::~Sample( void )
{
	std::cout << "Destructor called " << std::endl;
	return ;
}