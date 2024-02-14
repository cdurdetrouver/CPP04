/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gabriel.bazart@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 00:54:05 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/11 00:54:19 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	std::cout << "Default Ice created" << std::endl;
}

Ice::Ice(const Ice &ice) : AMateria("ice")
{
	std::cout << "Copying Ice" << std::endl;
	*this = ice;
}

Ice::~Ice()
{
	std::cout << "Deleting Ice" << std::endl;
}

Ice &Ice::operator=(const Ice &ice)
{
	if (this != &ice)
	{
		std::cout << "Assigning Ice" << std::endl;
		this->type = ice.getType();
	}
	return (*this);
}

AMateria* Ice::clone() const
{
	std::cout << "Cloning Ice" << std::endl;
	return (new Ice());
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
