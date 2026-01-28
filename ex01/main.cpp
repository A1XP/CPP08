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

    return 0;
}
