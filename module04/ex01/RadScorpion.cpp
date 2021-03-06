/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 17:19:24 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/20 16:53:23 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion")
{
    std::cout << "* click click click *\n";
}

RadScorpion::RadScorpion(const RadScorpion & super): Enemy(super)
{
    std::cout << "* click click click *\n";   
}

RadScorpion & RadScorpion::operator=(const RadScorpion &super)
{
    Enemy::operator=(super);
    return (*this);
}

RadScorpion::~RadScorpion(void)
{
    std::cout << "* SPROTCH *\n";
}
