/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 19:22:47 by ezanotti          #+#    #+#             */
/*   Updated: 2023/07/12 13:33:29 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <cmath>

Fixed::Fixed()
{
	std::cout << "\e[32m[Default constructor called]\e[0m" << std::endl;
	this->_fixedValue = 0;
}

Fixed::Fixed(const int intValue)
{
	std::cout << "\e[32m[Int constructor called]\e[0m" << std::endl;
	this->_fixedValue = intValue << this->_fixedPosition;
}

Fixed::Fixed(const float floatValue)
{
	std::cout << "\e[32m[Float constructor called]\e[0m" << std::endl;
	this->_fixedValue = roundf(floatValue * (1 << this->_fixedPosition));
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "\e[32m[Copy constructor called]\e[0m" << std::endl;
	*this = src;
}

Fixed&	Fixed::operator=(const Fixed &src)
{
	std::cout << "\e[32m[Copy assignment operator called]\e[0m" << std::endl;
	this->setRawBits(src.getRawBits());
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "\e[31m[Destructor called]\e[0m" << std::endl;
}

int		Fixed::getRawBits(void) const
{
	return (this->_fixedValue);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixedValue = raw;
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(this->getRawBits()) / (1 << _fixedPosition));
}

int		Fixed::toInt(void) const
{
	return (this->getRawBits() >> _fixedPosition);
}

std::ostream &operator<<(std::ostream &out, Fixed const &fixed)
{
	out << fixed.toFloat();
	return (out);
}
