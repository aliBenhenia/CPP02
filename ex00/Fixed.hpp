/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 18:29:01 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/20 15:32:02 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
        private :
            int  fixed_point;
            const static int fractional_part = 8;
        public :
            Fixed();
            Fixed(const Fixed &obj);
            Fixed &operator =(Fixed &obj);
            int getRawBits(void) const;
            void setRawBits(int const raw);
            ~Fixed();
};
