#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <iostream>

class NotFound : public std::exception {
public:
    const char  *what() const throw() {
        return ("Error 404: Element not Found!");
    };
};

template <typename T>

const typename T::iterator  easyfind(T &container, int value) {
	const typename T::iterator result = std::find(container.begin(), container.end(), value);

	if (result == container.end())
		throw NotFound();
	std::cout << "Element '" << *result << "' was found!" << std::endl;
	return (result);
};

#endif