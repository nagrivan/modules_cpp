#include "convert.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Wrong number argument" << std::endl;
        return (1);
    }
    if (!argv[1])
    {
        std::cout << "Wrong argument" << std::endl;
        return (1);
    }
    double  result = FirstConvert(argv[1]);
    PrintChar(result);
    PrintInt(result);
    PrintFloat(result);
    PrintDouble(result);
    return (0);
}
