#include <iostream>
#include "Span.hpp"

int main()
{
	int max = 1000;

    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
   
    std::vector<int> test(10);
    srand(time(0));
    for (int i = 0; i < 10; i++)
        test[i] = rand() % max;

    Span test10(10);
    test10.addRange(test.begin(), test.end());
    try
    {
        std::cout << "Shortest Span: " << test10.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << test10.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    Span test10000(20);
    test10000.addRange(test.begin(), test.end());
    try
    {
        std::cout << "Shortest Span: " << test10000.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << test10000.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}
