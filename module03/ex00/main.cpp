/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 16:12:38 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/12 15:30:49 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

int     main(void)
{
    std::cout << "===== START =====\n";
    FragTrap frag("Zeros");
    frag.takeDamage(100);
    frag.beRepaired(20);
    frag.rangedAttack("Zoro");
    frag.meleeAttack("Zoro");
    frag.vaulthunter_dot_exe("socrates");
    frag.vaulthunter_dot_exe("bonacis");
    frag.vaulthunter_dot_exe("faster");
    std::cout << "====== END ======\n";
    return (0);
}