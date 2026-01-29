#include "MutantStack.hpp"
#include <iostream>
#include <vector>

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);

    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }

    std::stack<int> s(mstack);

    std::cout << "const mstack\n" << std::endl;

    const MutantStack<int> cms = mstack;
    for (auto x : mstack)
    {
        std::cout << x << std::endl;
    }

    std::cout << "mstack\n" << std::endl;

    for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it)
    {
        std::cout << *it << std::endl;
    }


    std::vector<int> l;

    l.push_back(5);
    l.push_back(17);

    std::cout << "l.back() " << l.back() << std::endl;
    l.pop_back();
    std::cout << "l.size() " <<l.size() << std::endl;

    std::vector<int>::iterator itv = l.begin();

    std::cout << "it (before --)" << *itv << std::endl;
    itv--;
    std::cout << "it (after --)" << *itv << std::endl;
    itv--;
    std::cout << "it (after --)" << *itv << std::endl;


    l.push_back(3);
    l.push_back(5);
    l.push_back(737);
    l.push_back(0);

    std::cout << "vector l\n" << std::endl;

    for (std::vector<int>::iterator it = l.begin(); it != l.end(); ++it)
    {
        std::cout << *it << std::endl;
    }

    return 0;
}