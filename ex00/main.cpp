/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esellier <esellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 16:11:25 by esellier          #+#    #+#             */
/*   Updated: 2025/05/29 16:34:19 by esellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Common.hpp"
#include "easyfind.hpp"

int main()
{
    int     array[] = { 21, -12, 87, 42, 24, -8, 17, -12};
    size_t  size = sizeof(array) / sizeof (array[0]);
    
    std::vector<int>::iterator  it;
    std::vector<int>            arrayvector (array, array + size);
    std::list<int>::iterator    itlist;
    std::list<int>              arraylist(array, array + size);

    it = easyfind(arrayvector, -12);
    if (it == arrayvector.end())
        std::cout << ERROR << PINK << "Value not found into the vector container\n" << RESET;
    else
        std::cout << PURPLE << "Value found into the vector container: "
                  << GREEN << *it << RESET << "\n";
        
    it = easyfind(arrayvector, 0);
    if (it == arrayvector.end())
        std::cout << ERROR << PINK << "Value not found into the vector container\n" << RESET;
    else
        std::cout << PURPLE << "Value found into the vector container: "
                  << GREEN << *it << RESET << "\n";

    itlist = easyfind(arraylist, 24);
    if (itlist == arraylist.end())
        std::cout << ERROR << PINK << "Value not found into the list container\n" << RESET;
    else
        std::cout << PURPLE << "Value found into the list container: "
                  << GREEN << *itlist << RESET << "\n";
        
    itlist = easyfind(arraylist, -42);
    if (itlist == arraylist.end())
        std::cout << ERROR << PINK << "Value not found into the list container\n" << RESET;
    else
        std::cout << PURPLE << "Value found into the list container: "
                  << GREEN << *itlist << RESET << "\n";

    return (0);
}
