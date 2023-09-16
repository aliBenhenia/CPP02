/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 18:29:01 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/16 20:25:34 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
class Fixed
{
        private :
            int  fixed_point;
            static int fractional_bits ;
        public :
            Fixed();
            Fixed(const Fixed &obj);
            Fixed &operator =(Fixed &obj);
            int getRawBits(void) const;
            void setRawBits(int const raw);
            ~Fixed();
};
