#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>

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
};

#endif
