/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 21:51:55 by mel-omar          #+#    #+#             */
/*   Updated: 2021/06/05 11:35:05 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>

class Fixed
{
	private:
		static const int	fractional_bits = 8;
		int					fixed_point_value;
	public:
		Fixed();
		Fixed(const Fixed &fixed);
		~Fixed();
		Fixed & operator= (const Fixed &fixed);
		int	getRawBits(void) const;
		void	setRawBits(const int raw);
};
#endif
