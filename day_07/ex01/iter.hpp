#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>

void    iter( T *pointer, int size, void (*func)(T const &param)) {
    for (int i = 0; i < size; i++) {
        func(pointer[i]);
    }
}

template <typename T>
void    myPrint(T &data) {
    std::cout << data << std::endl;
}

template <typename T>
void    myPrint2(T &data) {
    std::cout << "Data array: " << data << '\t';
}


#endif