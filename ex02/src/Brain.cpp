/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:02:31 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/10 16:12:47 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Default Constructor called for Brain" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Default Brain destructor called" << std::endl;
}

Brain::Brain(const Brain& Brain)
{
	std::cout << "Copy Constructor called for Brain" << std::endl;
	for (int i = 0; i < 100; i ++)
	{
		this->ideas[i] = Brain.ideas[i];
	}
}

Brain	&Brain::operator=(const Brain& Brain)
{
	std::cout << "Operator Assignement called for Brain" << std::endl;
	if (this != &Brain)
	{
		for (int i = 0; i < 100; i ++)
		{
			this->ideas[i] = Brain.ideas[i];
		}
	}
	return (*this);
}
