/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esellier <esellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 14:25:59 by esellier          #+#    #+#             */
/*   Updated: 2025/05/30 19:44:57 by esellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include "Common.hpp"

template<typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack();
        ~MutantStack();
        MutantStack(const MutantStack& other);
        
        typedef typename std::stack<T>::container_type::iterator it;

        MutantStack<T>  operator=(const MutantStack& other);
        it  begin();
        it  end();
};

#include "MutantStack.tpp"

#endif
