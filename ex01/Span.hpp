#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <stdexcept>

class Span
{
private:
    std::vector<int> numbers;
    unsigned int maxSize;
public:
    Span(unsigned int N);
    ~Span();
    Span(const Span& other);
    Span& operator=(const Span& other);

    void addNumber(int n);
    int shortestSpan() const;
    int longestSpan() const;

    const std::vector<int>& getNumbers() const;

    template <typename It>
    void addNumber(It begin, It end);
};

template <typename It>
void Span::addNumber(It begin, It end)
{
    size_t count = std::distance(begin, end);

    if (numbers.size() + count > maxSize)
        throw std::out_of_range("Span is full");

    numbers.insert(numbers.end(), begin, end);
}

#endif
