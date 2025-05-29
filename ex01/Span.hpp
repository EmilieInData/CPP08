/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esellier <esellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 16:38:46 by esellier          #+#    #+#             */
/*   Updated: 2025/05/29 17:02:55 by esellier         ###   ########.fr       */
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
        void                addNumber(unsigned int value);
        unsigned int        shortestSpan();
        unsigned int        longestSpan();

    private:
        Span();
        unsigned int        _N;
        std::vector<int>    _contenair;
};

#endif
