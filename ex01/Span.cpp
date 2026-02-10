#include "Span.hpp"

#include <algorithm>

Span::Span(unsigned int N) : maxSize(N) {}

Span::Span(const Span& other) : numbers(other.numbers), maxSize(other.maxSize) {}

Span& Span::operator=(const Span& other)
{
    if (this != &other)
    {
        numbers = other.numbers;
        maxSize = other.maxSize;
    }
    return *this;
}

Span::~Span() {}

void Span::addNumber(int n)
{
    if (numbers.size() >= maxSize)
        throw std::out_of_range("Span is full");
    numbers.push_back(n);
}

int Span::shortestSpan() const 
{
    if (numbers.size() < 2)
        throw std::logic_error("Not enough numbers");

    std::vector<int> temp(numbers);
    std::sort(temp.begin(), temp.end());

    int minSpan = temp[1] - temp[0];
    for (size_t i = 1; i < temp.size() - 1; ++i)
    {
        int diff = temp[i+1] - temp[i];
        if (diff < minSpan)
            minSpan = diff;
    }
    return minSpan;
}


int Span::longestSpan() const
{
    if (numbers.size() < 2)
        throw std::logic_error("Not enough numbers");

    int minVal = *std::min_element(numbers.begin(), numbers.end());
    int maxVal = *std::max_element(numbers.begin(), numbers.end());

    return maxVal - minVal;
}

const std::vector<int>& Span::getNumbers() const { return numbers; }