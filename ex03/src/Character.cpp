/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 00:53:11 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/19 13:43:13 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : name("undefined")
{
	if (DEBUG)
		std::cout << "Default character created with name: " << name << std::endl;
	for (int i = 0; i < 4; i++)
		this->items[i] = NULL;
}

Character::Character(const std::string name) : name(name)
{
	if (DEBUG)
		std::cout << "Creating character: " << name << std::endl;
	for (int i = 0; i < 4; i++)
		this->items[i] = NULL;
}

Character::Character(const Character &character)
{
	if (DEBUG)
		std::cout << "Copying character: " << character.name << std::endl;
	this->name = character.name;
	for (int i = 0; i < 4; i++)
	{
		if (character.items[i])
			this->items[i] = character.items[i]->clone();
	}
}

Character::~Character()
{
	if (DEBUG)
		std::cout << "Deleting character: " << this->name << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->items[i] != NULL)
			delete this->items[i];
	}
}

Character &Character::operator=(const Character &character)
{
	if (this != &character)
	{
		if (DEBUG)
			std::cout << "Assigning character: " << character.name << " to " << this->name << std::endl;
		this->name = character.name;
		for (int i = 0; i < 4; i++)
		{
			delete this->items[i];
			this->items[i] = NULL;
			if (character.items[i] != NULL)
			{
				this->items[i] = character.items[i]->clone();
				if (DEBUG)
					std::cout << "clone" << std::endl;
			}
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
		if (DEBUG)
			std::cout << "Trying to equip a NULL materia" << std::endl;
		return;
	}
	for (int i = 0; i < 4; i++)
	{
		if (this->items[i] == NULL)
		{
			if (DEBUG)
				std::cout << this->name << " is equipping " << m->getType() << " at index " << i << std::endl;
			this->items[i] = m;
			return;
		}
	}
	if (DEBUG)
		std::cout << "No available slot to equip " << m->getType() << std::endl;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3 && this->items[idx])
	{
		if (DEBUG)
			std::cout << "Unequipping item at index: " << idx << std::endl;
		this->items[idx] = NULL;
	}
	else if (this->items[idx] == NULL)
	{
		if (DEBUG)
			std::cout << "Nothing are equiped at this index : " << idx << std::endl;
	}
	else if (DEBUG)
			std::cout << "Invalid index: " << idx << std::endl;
}

AMateria			*Character::getItem(int idx)
{
	if (idx >= 0 && idx <= 3)
		return (this->items[idx]);
	return (NULL);
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= 3)
	{
		if (this->items[idx])
		{
			if (DEBUG)
				std::cout << "Using item at index: " << idx << std::endl;
			this->items[idx]->use(target);
		}
		else if (DEBUG)
				std::cout << "No item at index: " << idx << std::endl;
	}
	else if (DEBUG)
			std::cout << "Invalid index: " << idx << std::endl;
}
