/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esellier <esellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 16:11:25 by esellier          #+#    #+#             */
/*   Updated: 2025/06/02 16:28:45 by esellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Common.hpp"
#include "Span.hpp"

int main()
{
    try
    {
        Span sp = Span(10005);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << GREEN << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl << RESET;

        // //creation of a contener to try the optimized
        // //fonction addRangeNumber
        
        // unsigned int value = 10000;
        // std::vector<int> array;
        // for (unsigned int i = 0; i < value; i++)
        //     array.push_back(i);
        
        // std::vector<int>::iterator begin = array.begin();
        // std::vector<int>::iterator end = array.end();
        // sp.addRangeNumber(begin, end);

        // std::cout << PURPLE << "Contenair's values:\n";
        // for (int i = 0; i < 10005; i++)
        //     std::cout << GREEN << sp.getContenair(i) << '\n' << RESET;

        // std::cout << GREEN << sp.shortestSpan() << std::endl;
        // std::cout << sp.longestSpan() << std::endl << RESET;
    }       
    catch(std::underflow_error e)
    {
        std::cerr << ERROR << PINK << e.what() << '\n' << RESET;
    }
    catch(std::length_error e)
    {
        std::cerr << ERROR << PINK << e.what() << '\n' << RESET;
    }
    catch(std::out_of_range e)
    {
        std::cerr << ERROR << PINK << "Value out of range\n" << RESET;
    }
    return (0);
}
