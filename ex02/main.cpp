/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:29:54 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/20 20:54:12 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
        Fixed a(10);
        Fixed b(2);
         std :: cout << a / b<< "\n";
        // Fixed a;
        // Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
        // std::cout << a << std::endl;
        // std::cout << ++a << std::endl;
        // std::cout << a << std::endl;
        // std::cout << a++ << std::endl;
        // std::cout << a << std::endl;
        // std::cout << b << std::endl;
        // std::cout << Fixed::max( a, b ) << std::endl;
        return 0;
}
