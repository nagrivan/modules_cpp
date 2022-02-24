#include "Data.hpp"

uintptr_t serialize(Data* ptr) {
    return ( reinterpret_cast<uintptr_t>(ptr) );
}

Data* deserialize(uintptr_t raw) {
    return ( reinterpret_cast<Data*>(raw) );
}

int main()
{
    Data    a;
    a.DataInt = 42;
    a.DataFloat = 42.21f;
    a.DataString = "Hello, World!";

    uintptr_t   RawA = serialize(&a);
    
    Data    *b = deserialize(RawA);

    uintptr_t   RawB = serialize(b);

    std::cout << "| " << RawA << " | " << a.DataInt << " | " << a.DataFloat << " | " << a.DataString << " |" << std::endl;
    std::cout << "| " << RawB << " | " << b->DataInt << " | " << b->DataFloat << " | " << b->DataString << " |" << std::endl;
}
