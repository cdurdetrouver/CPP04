/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 14:30:04 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/06 14:40:22 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	std::cout << "Default Constructor called for WrongCat" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Default WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& wrongcat) : WrongAnimal(wrongcat.type)
{
	std::cout << "Copy Constructor called for WrongCat" << std::endl;
}

void	WrongCat::operator=(const WrongCat& wrongcat)
{
	std::cout << "Copy Constructor called for WrongCat" << std::endl;
	this->type = wrongcat.type;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Miaou" << std::endl;
}
