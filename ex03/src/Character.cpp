/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gabriel.bazart@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 00:53:11 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/15 16:14:55 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : name("undefined")
{
	std::cout << "Default character created with name: " << name << std::endl;
	for(int i = 0; i < 4; i++)
	{
		this->items[i] = NULL;
	}
}

Character::Character(const std::string name) : name(name)
{
	std::cout << "Creating character: " << name << std::endl;
	for(int i = 0; i < 4; i++)
	{
		this->items[i] = NULL;
	}
}

Character::Character(const Character &character)
{
	std::cout << "Copying character: " << character.name << std::endl;
	this->name = character.name;
	for (int i = 0; i < 4; i++)
	{
		this->items[i] = character.items[i];
	}
}

Character::~Character()
{
	std::cout << "Deleting character: " << this->name << std::endl;
	// for (int i = 0; i < 4; i++)
	// {
	// 	delete this->items[i];
	// }
}

Character &Character::operator=(const Character &character)
{
	if (this != &character)
	{
		std::cout << "Assigning character: " << character.name << " to " << this->name << std::endl;
		this->name = character.name;
		for (int i = 0; i < 4; i++)
		{
			this->items[i] = character.items[i];
		}
	}
	return (*this);
}

std::string const &Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria* m)
{
	if (m == NULL)
	{
		std::cout << "Trying to equip a NULL materia" << std::endl;
		return;
	}
	for (int i = 0; i < 4; i++)
	{
		if (this->items[i] == NULL)
		{
			std::cout << this->name << " is equipping " << m->getType() << " at index " << i << std::endl;
			this->items[i] = m;
			return;
		}
	}
	std::cout << "No available slot to equip " << m->getType() << std::endl;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3 && this->items[idx])
	{
		std::cout << "Unequipping item at index: " << idx << std::endl;
		this->items[idx] = NULL;
	}
	else if (this->items[idx] == NULL)
	{
		std::cout << "Nothing are equiped at this index : " << idx << std::endl;
	}
	else
	{
		std::cout << "Invalid index: " << idx << std::endl;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= 3)
	{
		if (this->items[idx])
		{
			std::cout << "Using item at index: " << idx << std::endl;
			this->items[idx]->use(target);
		}
		else
		{
			std::cout << "No item at index: " << idx << std::endl;
		}
	}
	else
	{
		std::cout << "Invalid index: " << idx << std::endl;
	}
}
