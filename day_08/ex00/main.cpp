#include <vector>
#include <deque>
#include <array>
#include <ctime>

#include "easyfind.hpp"

#define SIZE_CONTAINER 10

int main(void)
{
	int max = 100;

    srand(time(0));
    int value = rand() % max;


    std::cout << "Random value = " << value << std::endl;
    std::cout << "\tTest for vector" << std::endl;
    try {
        std::vector<int>    myVector;

        for (int i = 0; i < SIZE_CONTAINER; i++) {
            myVector.push_back(rand() % max);
            std::cout << myVector[i] << " ";
        }
        std::cout << std::endl;
        easyfind(myVector, value);
    } catch (std::exception& e) {
		std::cerr << e.what() << std::endl << std::endl;
	}

    std::cout << "\tTest for deque" << std::endl;
    try {
        std::deque<int>    myDeque;

        for (int i = 0; i < SIZE_CONTAINER; i++) {
            myDeque.push_back(rand() % max);
            myDeque.push_front(rand() % max);
        }
        for (int i = 0; i < SIZE_CONTAINER; i++)
            std::cout << myDeque[i] << " ";
        std::cout << std::endl;
        easyfind(myDeque, value);
        std::cout << std::endl;
    } catch (std::exception& e) {
		std::cerr << e.what() << std::endl << std::endl;
	}

    std::cout << "\tTest for array" << std::endl;
    try {
        std::array<int, SIZE_CONTAINER>    myArray;

        for (int i = 0; i < SIZE_CONTAINER; i++) {
            myArray[i] = rand() % max;
			std::cout << myArray[i] << " ";
        }
        std::cout << std::endl;
        easyfind(myArray, value);
        std::cout << std::endl;
    } catch (std::exception& e) {
		std::cerr << e.what() << std::endl << std::endl;
	}
    return 0;
}
