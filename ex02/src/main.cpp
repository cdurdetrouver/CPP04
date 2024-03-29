/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 17:57:38 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/19 13:54:19 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "AAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main(void)
{
	size_t	tab_size = 10;
	AAnimal *animals[tab_size];

	for (size_t i = 0; i < tab_size ; i++)
	{
		if (i%2==0)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}

	for (size_t i = 0; i < tab_size ; i++)
	{
		animals[i]->makeSound();
	}

	for (size_t i = 0; i < tab_size ; i++)
		delete animals[i];

	// instancire un objet de classe animal
	// AAnimal animal();
	// animal->makeSound();
	// delete animal;

	return (0);
}
