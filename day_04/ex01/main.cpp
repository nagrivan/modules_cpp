#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    std::cout << "\nTest 1" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;
    std::cout << "\nTest 2.1" << std::endl;
    Cat cat1;
    cat1.makeSound();
    Cat cat2 = cat1;
    cat2.makeSound();
    std::cout << "\nTest 2.2" << std::endl;
    Dog dog1;
    dog1.makeSound();
    Dog dog2 = dog1;
    dog2.makeSound();
    std::cout << "\nTest 3" << std::endl;
    Animal *array[4];
    for (int i = 0; i < 4; i++)
    {
        if (!(i % 2))
        {
            array[i] = new Cat;
            array[i]->makeSound();
        }
        else
        {
            array[i] = new Dog;
            array[i]->makeSound();
        }
    }
    for (int i = 0; i < 4; i++)
    {
        if (array[i])
            delete array[i];
    }

    return (0);
}