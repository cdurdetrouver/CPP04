/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 00:54:05 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/19 13:41:56 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	if (DEBUG)
		std::cout << "Default Ice created" << std::endl;
}

Ice::Ice(const Ice &ice) : AMateria("ice")
{
	if (DEBUG)
		std::cout << "Copying Ice" << std::endl;
	*this = ice;
}

Ice::~Ice()
{
	if (DEBUG)
		std::cout << "Deleting Ice" << std::endl;
}

Ice &Ice::operator=(const Ice &ice)
{
	if (this != &ice)
	{
		if (DEBUG)
		std::cout << "Assigning Ice" << std::endl;
		this->type = ice.getType();
	}
	return (*this);
}

AMateria* Ice::clone() const
{
	if (DEBUG)
		std::cout << "Cloning Ice" << std::endl;
	return (new Ice());
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
