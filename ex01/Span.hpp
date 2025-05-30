/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esellier <esellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 16:38:46 by esellier          #+#    #+#             */
/*   Updated: 2025/05/30 14:22:05 by esellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include "Common.hpp"

class Span
{
    public:
        Span(unsigned int value);
        Span(Span const& other);
        ~Span();
        
        Span                operator=(Span const& other);
        void                addNumber(const unsigned int value);
        void                addRangeNumber(const unsigned int value);
        unsigned int        shortestSpan();
        unsigned int        longestSpan();
        int                 getContenair(int value)const;

    private:
        Span();
        unsigned int        _N;
        std::vector<int>    _contenair;
};

#endif
