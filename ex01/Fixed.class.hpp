/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 19:00:31 by ezanotti          #+#    #+#             */
/*   Updated: 2023/07/12 13:33:11 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>

class	Fixed
{
	private:
		int					_fixedValue;
		static const int	_fixedPosition = 8;

	public:
		Fixed();
		Fixed(const int intValue);
		Fixed(const float floatValue);
		Fixed(const Fixed &src);
		Fixed &operator=(const Fixed &src);
		~Fixed();
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, Fixed const &fixed);

#endif
