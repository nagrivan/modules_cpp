#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <class T>
class Array
{
private:
    T *_array;
    unsigned int _size;
public:
    Array() {
        _array = new T[0];
        _size = 0;
        std::cout << "Class Array was created" << std::endl;
    };
    Array(unsigned int size) {
        _array = new T[size];
        _size = size;
        std::cout << "Class Array was created" << std::endl;
    };
    Array(const Array &copy) {
        std::cout << "Copy construction was started!" << std::endl;
        _size = copy._size;
        this->_array = new T[copy._size];
        for (unsigned int i = 0; i < copy._size; i++) {
            this->_array[i] = copy._array[i];
        }
    };
    Array &operator=(const Array &copy) {
        std::cout << "Used overload for operator =" << std::endl;
        if (this == &copy)
            return ( *this );
        _size = copy._size;
        delete [] this->_array;
        this->_array = new T[copy._size];
        for (int i = 0; i < copy._size; i++) {
            this->_array[i] = copy._array[i];
        }
        return ( *this );
    };
    T &operator[](int number) {
        if (number < 0 || (unsigned int)number >= this->_size)
			throw (std::out_of_range("Error: Segfault"));
        return (_array[number]);
    };
    ~Array() {
        delete [] _array;
        std::cout << "Class Array was destroyed" << std::endl;
    };

    unsigned int size(void) {
        return (_size);
    }
};

#endif