#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>

class Span
{
private:
    unsigned int _size;
    std::vector<int> _trash;
    Span();
public:
    Span(unsigned int N);
    ~Span();
    Span(const Span &copy);
    Span&   operator=(const Span &copy);

    void    addNumber(int value);
    int shortestSpan(void);
    int longestSpan(void);

    void addRange(std::vector<int>::iterator start, std::vector<int>::iterator end);

    class WhereDoYouAdd : public  std::exception {
    public:
        const char  *what() const throw();
    };

    class NullVector : public std::exception {
    public:
        const char  *what() const throw();
    };

    class NotValues : public std::exception {
    public:
        const char  *what() const throw();
    };
};

#endif