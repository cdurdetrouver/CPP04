/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:06:40 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/06 14:39:28 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Default Constructor called for Cat" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Default Cat destructor called" << std::endl;
}

Cat::Cat(const Cat& cat) : Animal(cat.type)
{
	std::cout << "Copy Constructor called for Cat" << std::endl;
}

void	Cat::operator=(const Cat& cat)
{
	std::cout << "Operator Assignement called for Cat" << std::endl;
	this->type = cat.type;
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaou" << std::endl;
}