#include "Base.hpp"

Base *generate(void) {
    int result = std::rand() % 3;
    switch (result)
    {
    case 0:
        std::cout << "Class A was created!" << std::endl;
        return (new A());
    case 1:
        std::cout << "Class B was created!" << std::endl;
        return (new B());
    default:
        std::cout << "Class C was created!" << std::endl;
        return (new C());
    }
}

void identify(Base* p) {
    std::cout << "* is a ";
    if (p == 0)
        std::cout << "Nullpointer";
    else if (dynamic_cast<A*>(p) != NULL)
        std::cout << " class A";
    else if (dynamic_cast<B*>(p) != NULL)
        std::cout << " class B";
    else if (dynamic_cast<C*>(p) != NULL)
        std::cout << " class C";
    else
        std::cout << " Unknow class :(";
    std::cout << std::endl;
}

void identify(Base& p) {
    try
    {
        A &optionA = dynamic_cast<A&>(p);
        static_cast<void>(optionA);
        std::cout << "& is a class A" << std::endl;
    }
    catch(const std::exception& e) {}
    try
    {
        B &optionB = dynamic_cast<B&>(p);
        static_cast<void>(optionB);
        std::cout << "& is a class B" << std::endl;
    }
    catch(const std::exception& e) {}
    try
    {
        C &optionC = dynamic_cast<C&>(p);
        static_cast<void>(optionC);
        std::cout << "& is a class C" << std::endl;
    }
    catch(const std::exception& e) {}
}

int main()
{
    Base *random;
    std::srand(time(0));
    for (int classes = 0; classes < 3; classes++) {
        random = generate();
        identify(random);
        identify(*random);
        delete random;
    }
    return (0);
}
