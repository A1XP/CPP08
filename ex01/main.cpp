#include "Span.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    const int N = 10;
    Span sp(N);

    srand(time(nullptr));


    for (int i = 0; i < N; ++i)
    {
        int num = rand() % 1000;
        sp.addNumber(num);
    }

    std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
    std::cout << "Longest span: " << sp.longestSpan() << std::endl;

    std::cout << "Numbers in Span: \n";
    for (const auto& num : sp.getNumbers())
    {
        std::cout << num << "\n";
    }

    Span sp2(10);

    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    try
    {
        sp2.addNumber(numbers.begin(), numbers.end());
    } 
    catch (const std::out_of_range& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "Numbers in Span2: \n";
    for (const auto& num : sp2.getNumbers())
    {
        std::cout << num << "\n";
    }

    return 0;
}
