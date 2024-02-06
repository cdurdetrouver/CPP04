/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:06:58 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/06 14:24:09 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Default Constructor called for Dog" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Default Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &dog) : Animal(dog.type)
{
	std::cout << "Copy Constructor called for Dog" << std::endl;
}

void	Dog::operator=(const Dog &dog)
{
	std::cout << "Operator Assignement called for Dog" << std::endl;
	this->type = dog.type;
}

void	Dog::makeSound(void) const
{
	std::cout << "Ouaf !!!" << std::endl;
}
