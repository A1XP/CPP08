#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include "easyfind.hpp"

int main()
{
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    try
	{
        std::cout << *easyfind(v, 2) << std::endl;
        std::cout << *easyfind(v, 42) << std::endl;
    }
	catch (const NotFoundException& e)
	{
		std::cout << e.what() << std::endl;
	}

    std::list<int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);

    try
	{
        std::cout << *easyfind(l, 20) << std::endl;
        std::cout << *easyfind(l, 42) << std::endl;
	}
    catch (const NotFoundException& e)
	{
        std::cout << e.what() << std::endl;
    }

	std::deque<int> d{5, 10, 15};

	try
	{
        std::cout << *easyfind(d, 10) << std::endl;
        std::cout << *easyfind(d, 42) << std::endl;
	}
    catch (const NotFoundException& e)
	{
        std::cout << e.what() << std::endl;
    }

	return 0;
}
