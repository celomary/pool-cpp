/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 18:53:41 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/03 23:23:33 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int     main(void)
{
    ZombieEvent     event;
    Zombie          *zomb;
    Zombie          *rand_zomb;
    event.setZombieType("Mytype");
    zomb = event.newZombie("ZombieLand");
    rand_zomb = event.randomChump();
    zomb->announce();
    rand_zomb->announce();
    delete zomb;
    delete rand_zomb;
   return (0);
}
