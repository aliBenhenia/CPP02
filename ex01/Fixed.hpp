/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 16:17:32 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/20 15:46:10 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
class Fixed
{
        private :
            int  fixed_point;
            const static  int fractional_part = 8;
        public :
            Fixed();
            Fixed(const Fixed &obj);
            Fixed(const int num);
            Fixed(const float floating);
            Fixed &operator =(const Fixed &obj);
            int getRawBits(void) const;
            void setRawBits(int const raw);
            float toFloat( void ) const;
            int toInt( void ) const;
            ~Fixed();
};
std :: ostream& operator <<(std :: ostream& mycout, const Fixed &obj);