/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:00:13 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/06 14:53:40 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Default Constructor called for Animal" << std::endl;
	this->type = "undefined";
}

Animal::Animal(std::string type)
{
	std::cout << "Default Constructor called for Animal" << std::endl;
	this->type = type;
}

Animal::~Animal()
{
	std::cout << "Default Animal destructor called" << std::endl;
}

Animal::Animal(const Animal &animal)
{
	this->type = animal.type;
}

void	Animal::operator=(const Animal &animal)
{
	this->type = animal.type;
}

void	Animal::makeSound(void) const
{
	std::cout << "Unknow sound for undefined animal" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->type);
}
