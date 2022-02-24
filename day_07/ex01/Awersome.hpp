#pragma once

#include <iostream>

class Awersome
{
private:
	int _n;
public:
	Awersome(void) : _n(42) { return ; };
	int get() const { return this->_n; };

	// Awersome(int n) : _n(n) {};

	// Awersome & operator= (Awersome &a) { _n = a._n; return *this; };
	// bool operator==(Awersome const &rhs) { return (this->_n == rhs._n); };
	// bool operator!=(Awersome const &rhs) { return (this->_n != rhs._n); };
	// bool operator>(Awersome const &rhs) const { return (this->_n > rhs._n); };
	// bool operator<(Awersome const &rhs) const { return (this->_n < rhs._n); };
	// bool operator>=(Awersome const &rhs) { return (this->_n >= rhs._n); };
	// bool operator<=(Awersome const &rhs) { return (this->_n <= rhs._n); };
	// ~Awersome();
};

std::ostream & operator<<(std::ostream &o, const Awersome &rhs) { o << rhs.get(); return o; }

template <typename T>

void print(T const &x) { std::cout << x << std::endl; return ;}
