/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esellier <esellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 15:37:18 by esellier          #+#    #+#             */
/*   Updated: 2025/05/29 16:11:06 by esellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include "Common.hpp"

template<typename T>
typename T::iterator easyfind(T& array, int i)
{
    typename T::iterator it;
    
    it = find(array.begin(), array.end(), i);
    return it;
}

#endif
