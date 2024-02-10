/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 14:31:49 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/10 16:02:18 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "Default Constructor called for WrongAnimal" << std::endl;
	this->type = "undefined";
}

WrongAnimal::WrongAnimal(std::string type)
{
	std::cout << "Constructor called for WrongAnimal" << std::endl;
	this->type = type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Default WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &WrongAnimal)
{
	this->type = WrongAnimal.type;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &WrongAnimal)
{
	if (this != &WrongAnimal)
	{
		this->type = WrongAnimal.type;
	}
	return (*this);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Unknow sound for undefined WrongAnimal" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}