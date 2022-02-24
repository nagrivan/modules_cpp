#pragma once

#include <iostream>

class Awersome
{
private:
	int _n;
public:
	Awersome(void) : _n(0) {};
	Awersome(int n) : _n(n) {};

	Awersome & operator= (Awersome &a) { _n = a._n; return *this; };
	bool operator==(Awersome const &rhs) { return (this->_n == rhs._n); };
	bool operator!=(Awersome const &rhs) { return (this->_n != rhs._n); };
	bool operator>(Awersome const &rhs) const { return (this->_n > rhs._n); };
	bool operator<(Awersome const &rhs) const { return (this->_n < rhs._n); };
	bool operator>=(Awersome const &rhs) { return (this->_n >= rhs._n); };
	bool operator<=(Awersome const &rhs) { return (this->_n <= rhs._n); };
	int get_n() const { return _n; }
	// ~Awersome();
};

std::ostream & operator<<(std::ostream &o, const Awersome &a) { o << a.get_n(); return o; }
