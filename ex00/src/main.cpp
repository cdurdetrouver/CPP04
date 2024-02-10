/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 17:57:38 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/10 16:04:10 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << meta->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;

	meta->makeSound();
	i->makeSound();
	j->makeSound();

	delete meta;
	delete i;
	delete j;

	std::cout << std::endl;
	std::cout << "Wrong Animal Test" << std::endl;
	std::cout << std::endl;

	const WrongAnimal* meta2 = new WrongAnimal();
	const WrongAnimal* j2 = new WrongCat();

	std::cout << meta2->getType() << " " << std::endl;
	std::cout << j2->getType() << " " << std::endl;

	meta2->makeSound();
	j2->makeSound();

	delete meta2;
	delete j2;

	return (0);
}
