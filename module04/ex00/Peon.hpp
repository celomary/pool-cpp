/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 11:29:43 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/20 16:31:28 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP

#include "Victim.hpp"

class Peon : public Victim
{
    Peon(void);
    public:
        Peon(const Peon & peon);
        Peon & operator = (const Peon & peon);
        virtual ~Peon(void);
        Peon(const std::string &name);
        void    getPolymorphed(void) const;
};
#endif