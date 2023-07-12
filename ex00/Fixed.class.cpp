/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 19:22:47 by ezanotti          #+#    #+#             */
/*   Updated: 2023/07/12 13:13:03 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed()
{
	std::cout << "\e[32m[Default constructor called]\e[0m" << std::endl;
	this->_fixedValue = 0;
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
	std::cout << "\e[33m[getRawBits member function called]\e[0m" << std::endl;
	return (this->_fixedValue);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixedValue = raw;
}
