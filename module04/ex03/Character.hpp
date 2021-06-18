/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 12:36:56 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/18 17:41:35 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
#include "AMateria.hpp"
#include "ICharacter.hpp"
#define MAX_MATERIAS 4
class Character : public ICharacter
{
    Character(void);
    AMateria             *matrias[4];
    void                 clear_materias(void);
    public:
        Character(const std::string & name);
        Character(const Character & character);
        Character & operator =(const Character &character);
        ~Character(void);
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif