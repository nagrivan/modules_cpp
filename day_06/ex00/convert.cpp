#include "convert.hpp"

double  FirstConvert(char *parametr)
{
    double  result;
    char    *endptr;

    result = std::strtod(parametr, &endptr);
    if (!result && *endptr && endptr[1] == '\0' && std::isprint(endptr[0]))
        result = static_cast<double>(endptr[0]);
    else if (*endptr && (endptr[1] != '\0' || endptr[0] != 'f'))
    {
        std::cout << "Invalid argument" << std::endl;
        exit (1);
    }
    return (result);
}

void    PrintChar(double value)
{
    std::cout << "char: ";
    if (value != value || value == std::numeric_limits<double>::infinity()
        || value == -std::numeric_limits<double>::infinity()
        || value > std::numeric_limits<char>::max()
        || value < std::numeric_limits<char>::min())
        std::cout << "impossible";
    else if (!std::isprint(value))
        std::cout << "Non displayable";
    else
        std::cout << "'" << static_cast<char>(value) << "'";
    std::cout << std::endl;
}

void    PrintInt(double value)
{
    std::cout << "int: ";
    if (value != value || value == std::numeric_limits<double>::infinity()
        || value == -std::numeric_limits<double>::infinity()
        || value > std::numeric_limits<int>::max()
        || value < std::numeric_limits<int>::min())
        std::cout << "impossible";
    else
        std::cout << static_cast<int>(value);
    std::cout << std::endl;
}

void    PrintFloat(double value)
{
    std::cout << "float: " << value;
    if (!(value - static_cast<int>(value)))
        std::cout << ".0";
    std::cout << "f" << std::endl;
}

void    PrintDouble(double value)
{
    std::cout << "double: " << value;
    if (!(value - static_cast<int>(value)))
        std::cout << ".0";
    std::cout << std::endl;
}