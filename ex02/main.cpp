/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esellier <esellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 17:52:15 by esellier          #+#    #+#             */
/*   Updated: 2025/05/30 19:45:47 by esellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include "Common.hpp"

int main ()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);

    std::cout << GREEN << mstack.top() << std::endl;
    
    mstack.pop();

    std::cout << mstack.size() << std::endl;
    
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    
    MutantStack<int>::it it = mstack.begin();
    MutantStack<int>::it ite = mstack.end();
    
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::stack<int> s(mstack);
    std::cout << std::endl;

    
    std::list<int> liststack;
    liststack.push_back(5);
    liststack.push_back(17);
    
    std::cout << liststack.back() << std::endl;
    
    liststack.pop_back();

    std::cout << liststack.size() << std::endl;

    liststack.push_back(3);
    liststack.push_back(5);
    liststack.push_back(737);
    liststack.push_back(0);
    
    std::list<int>::iterator it2 = liststack.begin();
    std::list<int>::iterator ite2 = liststack.end();
    
    ++it2;
    --it2;
    while (it2 != ite2)
    {
        std::cout << *it2 << std::endl;
        ++it2;
    }
    return 0;
}

// push(): add an element
// you stack (like a pile of plates)
    
// pop(): remove the top element
// you unstack, ⚠️ No return value (need top() first)
    
// top(): reaches the top without removing it
// usefull to know what we will take it off after
    
// empty(): to avoid a mistake if we use pop() or top() on an empty stack

// size(): just for info, how many elements stacked
