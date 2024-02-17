/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 00:55:41 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/17 17:37:20 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	std::cout << "Creating MateriaSource" << std::endl;
	for(int i = 0; i < 4; i++)
		this->items[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &materiaSource)
{
	std::cout << "Copying MateriaSource" << std::endl;
	if (this != &materiaSource)
	{
		for(int i = 0; i < 4; i++)
			this->items[i] = materiaSource.items[i]->clone();
	}
}

MateriaSource::~MateriaSource()
{
	std::cout << "Deleting MateriaSource" << std::endl;
	for(int i = 0; i < 4; i++)
		delete this->items[i];
}

MateriaSource &MateriaSource::operator=(const MateriaSource &materiaSource)
{
	if (this != &materiaSource)
	{
		std::cout << "Assigning MateriaSource" << std::endl;
		for(int i = 0; i < 4; i++)
		{
			this->items[i] = materiaSource.items[i]->clone();
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *materia)
{
	std::cout << "Learning materia of type: " << materia->getType() << std::endl;
	int i = 0;

	while (i < 4 && this->items[i])
		i++;
	if (i >= 4)
	{
		std::cout << "No available slot to learn materia" << std::endl;
		return;
	}
	this->items[i] = materia;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	std::cout << "Creating materia of type: " << type << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->items[i] && this->items[i]->getType() == type)
		{
			std::cout << "Found matching materia at index: " << i << std::endl;
			return (this->items[i]->clone());
		}
	}
	std::cout << "No matching materia found" << std::endl;
	return (NULL);
}
