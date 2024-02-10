/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 14:30:04 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/10 16:02:49 by gbazart          ###   ########.fr       */
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

WrongCat	&WrongCat::operator=(const WrongCat& wrongcat)
{
	std::cout << "Copy Constructor called for WrongCat" << std::endl;
	if (this != &wrongcat)
	{
		this->type = wrongcat.type;
	}
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Miaou" << std::endl;
}
