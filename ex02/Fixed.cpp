/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:31:27 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/19 20:46:50 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

int Fixed :: fractional_part = 8;
Fixed :: Fixed ()
{
    fixed_point = 0;
    std :: cout << "default constructor called" << std :: endl;
}

Fixed :: Fixed(const Fixed &obj):fixed_point(obj.fixed_point)
{
    std :: cout << "copy constructor called" <<  std :: endl;
}

Fixed :: Fixed(const int num):
fixed_point (num << fractional_part)
{
    std :: cout << "Int constructor called" <<  std :: endl;
}

Fixed :: Fixed(const float floating)
:fixed_point (static_cast <int>(roundf(floating * (1 << fractional_part))))
{
     std :: cout << "Float constructor called" <<  std :: endl;
}

Fixed &Fixed ::  operator =(const Fixed &obj)
{
    if (this != &obj)
    {
        fixed_point = obj.fixed_point;
        std :: cout << "Copy assignment operator called" <<  std :: endl;
    }
    return *this;
}

float Fixed :: toFloat(void) const
{
    return (static_cast <float>(fixed_point) / (1 << fractional_part));
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

bool Fixed :: operator ==(const Fixed& b) const
{
    if (b.fixed_point == fixed_point)
        return (true);
    return (false);
}

bool Fixed :: operator !=(const Fixed& b) const
{
    if (b.fixed_point != fixed_point)
        return (true);
    return (false);
}

bool Fixed :: operator <(const Fixed& b) const
{
    if (fixed_point < b.fixed_point)
        return (true);
    return (false);
}
bool Fixed :: operator >(const Fixed& b) const
{
    if (fixed_point > b.fixed_point)
        return (true);
    return (false);
}

bool Fixed :: operator <=(const Fixed& b) const
{
    if (fixed_point <= b.fixed_point)
        return (true);
    return (false);
}

bool Fixed :: operator >=(const Fixed& b) const
{
    if (fixed_point >= b.fixed_point)
        return (true);
    return (false);
}

Fixed Fixed :: operator+(const Fixed &b)const
{
    Fixed A;

    A.fixed_point = this->fixed_point + b.fixed_point;
    std::cout << A.toFloat() << std::endl;
    return (A);
}

Fixed Fixed :: operator-(const Fixed &b)const
{
    Fixed A;

    A.fixed_point = this->fixed_point - b.fixed_point;
    std::cout << A.toFloat() << std::endl;
    return (A);
}

Fixed Fixed :: operator/(const Fixed &b)const
{
    float k = toFloat() / b.toFloat();
    Fixed A(k);
    return (A);
}

Fixed Fixed :: operator*(const Fixed &b)const
{
    float k = toFloat() * b.toFloat();
    Fixed A(k);
    return (A);
}

Fixed Fixed :: operator++(int)
{
    Fixed obj ;
    obj.fixed_point = fixed_point++;
  
    return (obj);
}

Fixed &Fixed :: operator++()
{
    ++fixed_point;   
    return (*this);
}

Fixed Fixed :: operator--(int)
{
    Fixed obj ;
    obj.fixed_point = fixed_point--;
    return (obj);
}

Fixed &Fixed :: operator--()
{
    --fixed_point;
    return (*this);
}

Fixed &Fixed ::  min( Fixed &a , Fixed &b)
{
    if (a.fixed_point < b.fixed_point)
        return a;
    return b;
}

const Fixed &Fixed ::  max(const Fixed &a ,const Fixed &b)
{
    if (a.fixed_point > b.fixed_point)
        return a;
    return b;
}


std :: ostream& operator <<(std :: ostream& os, const Fixed &obj)
{
    os << obj.toFloat();
    return (os);
}