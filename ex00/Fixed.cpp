/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 18:28:17 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/20 17:07:47 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

Fixed :: Fixed ()
{
    fixed_point = 0;
    std :: cout << "default constructor called\n";
}

Fixed :: Fixed(const Fixed &obj)
{
    std :: cout << "copy constructor called\n";
    fixed_point = obj.fixed_point;
}

Fixed &Fixed ::  operator =(Fixed &obj)
{
    std :: cout << "Copy assignment operator called\n";
    if (fixed_point != obj.fixed_point)
        fixed_point = obj.fixed_point;
    return *this;
}

void Fixed :: setRawBits(int const raw)
{
    fixed_point = raw;
}

int Fixed ::  getRawBits(void) const
{
    std :: cout << "getRawBits member function called\n";
    return (fixed_point);
}

Fixed :: ~Fixed()
{
    std :: cout << "destructor called\n";
}
