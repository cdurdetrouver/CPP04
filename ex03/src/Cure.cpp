/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 00:53:02 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/19 13:41:20 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	if (DEBUG)
		std::cout << "Default Cure created" << std::endl;
}

Cure::Cure(const Cure &cure) : AMateria("cure")
{
	if (DEBUG)
		std::cout << "Copying Cure" << std::endl;
	*this = cure;
}

Cure::~Cure()
{
	if (DEBUG)
		std::cout << "Deleting Cure" << std::endl;
}

Cure &Cure::operator=(const Cure &cure)
{
	if (this != &cure)
	{
		if (DEBUG)
			std::cout << "Assigning Cure" << std::endl;
		this->type = cure.getType();
	}
	return (*this);
}

AMateria* Cure::clone() const
{
	if (DEBUG)
		std::cout << "Cloning Cure" << std::endl;
	return (new Cure());
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

