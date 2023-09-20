/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 16:17:30 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/20 20:30:53 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"


Fixed :: Fixed ()
{
    fixed_point = 0;
    std :: cout << "default constructor called" << std :: endl;
}

Fixed :: Fixed(const Fixed &obj)
{
    *this = obj;
    std :: cout << "copy constructor called" <<  std :: endl;
}

Fixed :: Fixed(const int num):
fixed_point (num << fractional_part)
{
    std :: cout << "Int constructor called" <<  std :: endl;
}

Fixed :: Fixed(const float floating)
:fixed_point ((int)(roundf(floating * (1 << fractional_part))))
{
     std :: cout << "Float constructor called" <<  std :: endl;
}

Fixed &Fixed ::  operator =(const Fixed &obj)
{
    if (this != &obj)
    {
        fixed_point = obj.fixed_point;
    }
    std :: cout << "Copy assignment operator called" <<  std :: endl;
    return *this;
}

float Fixed :: toFloat(void) const
{
    return ((float)(fixed_point) / (1 << fractional_part));
}

int Fixed :: toInt(void) const
{
    return (fixed_point >> fractional_part);
}

void Fixed :: setRawBits(int const raw)
{
    fixed_point = raw;
}

int Fixed ::  getRawBits(void) const
{
    return (fixed_point);
}

Fixed :: ~Fixed()
{
    std :: cout << "destructor called " <<  std :: endl;
}

std :: ostream& operator <<(std :: ostream& os, const Fixed &obj)
{
    os << obj.toFloat();
    return (os);
}

