/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 23:32:45 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/04 11:48:56 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include  "ZombieHorde.hpp"

int		main(void)
{
	ZombieHorde		*horde;

	horde = new ZombieHorde(5);
	horde->announce();
	delete horde;
	return (0);
}