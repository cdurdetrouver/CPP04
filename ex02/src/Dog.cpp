/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:06:58 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/19 13:53:42 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : AAnimal("Dog")
{
	std::cout << "Default Constructor called for Dog" << std::endl;
	this->brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Default Dog destructor called" << std::endl;
	delete this->brain;
}

Dog::Dog(const Dog &dog) : AAnimal(dog.type)
{
	std::cout << "Copy Constructor called for Dog" << std::endl;
}

Dog	&Dog::operator=(const Dog &dog)
{
	std::cout << "Operator Assignement called for Dog" << std::endl;
	if (this != &dog)
	{
		this->type = dog.type;
	}
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Ouaf !!!" << std::endl;
}
