/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esellier <esellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 17:49:17 by esellier          #+#    #+#             */
/*   Updated: 2025/05/30 19:42:40 by esellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include "Common.hpp"

template<typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{
    std::cout << PURPLE << "Default constructor called\n" << RESET;
}

template<typename T>
MutantStack<T>::~MutantStack()
{
    std::cout << PURPLE << "Default destructor called\n" << RESET;    
}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack& other) : std::stack<T>(other)
{
    *this = other;
    std::cout << PURPLE << "Copy constructor called\n" << RESET;    
}

template<typename T>    
MutantStack<T>  MutantStack<T>::operator=(const MutantStack& other)
{
    if (this != &other)
        std::stack<T>::operator=(other);
    else
        std::cout << ERROR << PINK << "Attention, you're trying to assign a class to itself\n" << RESET;
    return (*this);
}

template<typename T>
typename MutantStack<T>::it MutantStack<T>::begin()
{
    return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::it MutantStack<T>::end()
{
    return (this->c.end());
}
