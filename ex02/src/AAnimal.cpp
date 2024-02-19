/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:00:13 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/10 16:15:10 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void)
{
	std::cout << "Default Constructor called for AAnimal" << std::endl;
	this->type = "undefined";
}

AAnimal::AAnimal(std::string type)
{
	std::cout << "Default Constructor called for AAnimal" << std::endl;
	this->type = type;
}

AAnimal::~AAnimal()
{
	std::cout << "Default AAnimal destructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &AAnimal)
{
	this->type = AAnimal.type;
}

AAnimal	&AAnimal::operator=(const AAnimal &AAnimal)
{
	if (this != &AAnimal)
	{
		this->type = AAnimal.type;
	}
	return (*this);
}

void	AAnimal::makeSound(void) const
{
	std::cout << "Unknow sound for undefined AAnimal" << std::endl;
}

std::string	AAnimal::getType(void) const
{
	return (this->type);
}
