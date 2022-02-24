#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongCat.hpp"
#include "WrongDog.hpp"

int main()
{
    std::cout << "Test correct class" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " will be a soung!" << std::endl;
    std::cout << i->getType() << " will be a soung!" << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete  i;
    delete  j;
    std::cout << "\nTest Wrong class" << std::endl;
    const WrongAnimal* wmeta = new WrongAnimal();
    const WrongAnimal* wj = new WrongDog();
    const WrongAnimal* wi = new WrongCat();
    std::cout << wj->getType() << " will be a soung!" << std::endl;
    std::cout << wi->getType() << " will be a soung!" << std::endl;
    wi->makeSound(); //will output the cat sound!
    wj->makeSound();
    wmeta->makeSound();
    delete wmeta;
    delete wi;
    delete wj;
}