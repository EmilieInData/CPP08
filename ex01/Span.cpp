/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esellier <esellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 17:04:27 by esellier          #+#    #+#             */
/*   Updated: 2025/06/02 16:25:21 by esellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Common.hpp"
#include "Span.hpp"

Span::Span()
{
    std::cout << PURPLE << "Default constructor called\n" << RESET;
}

Span::Span(unsigned int value) : _N(value)
{
    std::cout << PURPLE << "Value constructor called\n" << RESET;    
}

Span::Span(Span const& other)
{
    *this = other;
    std::cout << PURPLE << "Copie constructor called\n" << RESET;    
}

Span::~Span()
{
    std::cout << PURPLE << "Default destructor called\n" << RESET;    
}

Span    Span::operator=(Span const& other)
{
    if (this != &other)
    {
        _N = other._N;
        _contenair = other._contenair;
    }
    else
        std::cout << PINK << "Attention, you're trying to assign a class to itself\n" << RESET;
    return *this;
}

void    Span::addNumber(const unsigned int value)
{
    if (_contenair.size() < _N)
        _contenair.push_back(value);
    else
        throw std::length_error("The contenair is full, cannot add a new value");
    return;
}

unsigned int    Span::shortestSpan()
{
    int result;
    if (_contenair.size() < 2)
        throw std::underflow_error("Not enough values to calculate the shortest span");
    else
    {
        sort(_contenair.begin(), _contenair.end());
        result = _contenair[1] - _contenair[0];
        for (size_t i = 1; i < _contenair.size() - 1; i++)
        {
            if (_contenair[i + 1] - _contenair[i] < result)
            result =  _contenair[i + 1] - _contenair[i];
        }
        return (result);
    }
}

unsigned int    Span::longestSpan()
{
    if (_contenair.size() < 2)
        throw std::underflow_error("Not enough values to calculate the longest span");
    else
    {
        std::vector<int>::iterator itmin;
        std::vector<int>::iterator itmax;

        itmin = std::min_element(_contenair.begin(), _contenair.end());
        itmax = std::max_element(_contenair.begin(), _contenair.end());
        return (*itmax - *itmin);
    }
}

int Span::getContenair(int value)const
{
    return _contenair.at(value);
}

//"at" throw an exception "out_of_range" if we are out of bounds
//no need to check manually limits
