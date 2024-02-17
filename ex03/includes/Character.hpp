/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 16:25:30 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/17 16:50:25 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <string>

class Character : public ICharacter
{
	private:
		AMateria		*items[4];
		std::string		name;
	public:
		Character(void);
		Character(const Character &character);
		Character(const std::string name);
		virtual ~Character();

		Character					&operator=(const Character &character);

		virtual std::string const	&getName() const;
		virtual AMateria			*getItem(int idx);
		virtual void				equip(AMateria* m);
		virtual void				unequip(int idx);
		virtual void				use(int idx, ICharacter& target);
};

#endif
