/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gabriel.bazart@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 00:53:02 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/11 00:54:25 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	std::cout << "Default Cure created" << std::endl;
}

Cure::Cure(const Cure &cure) : AMateria("cure")
{
	std::cout << "Copying Cure" << std::endl;
	*this = cure;
}

Cure::~Cure()
{
	std::cout << "Deleting Cure" << std::endl;
}

Cure &Cure::operator=(const Cure &cure)
{
	if (this != &cure)
	{
		std::cout << "Assigning Cure" << std::endl;
		this->type = cure.getType();
	}
	return (*this);
}

AMateria* Cure::clone() const
{
	std::cout << "Cloning Cure" << std::endl;
	return (new Cure());
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

