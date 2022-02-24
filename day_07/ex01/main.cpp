#include "iter.hpp"
#include "Awersome.hpp"

int main(void) {
	{
		int values[] = {1, 2, 3, 4, 5, 6};
		std::string data[] = {"Hello", "Hi", "Bye-bye"};

		::iter(values, 6, ::myPrint);
		::iter(values, 6, ::myPrint2);
		std::cout << std::endl;

		::iter(data, 3, ::myPrint);
		::iter(data, 3, ::myPrint2);
		std::cout << std::endl;
	}
	{
		int tab[] = {0, 1, 2, 3, 4};
		Awersome tab2 [5];

		::iter(tab, 5, print);
		::iter(tab2, 5, print);
	}

    return (0);
}
