#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <stack>

template <class T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack() : std::stack <T>() {
		std::cout << "Stack was created!" << std::endl;
	};
	virtual ~MutantStack() {
		std::cout << "Stack was destroyed!" << std::endl;
	};
	MutantStack( const MutantStack &copy ) : std::stack <T>(copy) {
		std::cout << "Copirate construction started!" << std::endl;
	}

	MutantStack& operator=(const MutantStack &copy) {
		if (this == &copy)
			return (*this);
		this->c = copy.c;
		return (*this);
	}

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

	iterator	begin() {
		return this->c.begin();
	}

	iterator	end() {
		return this->c.end();
	};

	const_iterator	cbegin() const {
		return this->c.cbegin();
	};

	const_iterator	cend() const {
		return this->c.cend();
	};

	reverse_iterator	rbegin() {
		return this->c.rbegin();
	};

	reverse_iterator	rend() {
		return this->c.rend();
	};

	const_reverse_iterator	crbegin() {
		return this->c.crbegin();
	};

	const_reverse_iterator	crend() {
		return this->c.crend();
	};
};


#endif