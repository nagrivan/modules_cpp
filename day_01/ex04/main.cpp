#include <iostream>
#include <fstream>

bool    checkErrorFile(std::string inFileName, std::string s1, std::string s2)
{
    std::string outFileName = inFileName + ".replace";

    std::ifstream infile(inFileName);
    std::ofstream outfile(outFileName);

    std::string strBefore;
    std::size_t indexFirst;
    int position = 0;

    if (!infile.good() || !outfile.good())
    {
        std::cout << "Error opening file " + inFileName << std::endl;
        return (false);
    }
    while (!(getline(infile, strBefore).eof()))
    {
		position = 0;
        while ((indexFirst = strBefore.find(s1, position)) != std::string::npos)
        {
            strBefore.erase(indexFirst, s1.size());
            strBefore.insert(indexFirst, s2);
            position = indexFirst + s2.size();
        }
        outfile << strBefore << std::endl;
        if (outfile.fail() && outfile.eof())
            break ;
    }
    if (outfile.fail() && !outfile.eof())
    {
        std::cout << "Error write in " + outFileName + " file" << std::endl;
        return (false);
    }
    infile.close();
    outfile.close();
    return (true);
}

bool    checkErrorArgc(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Invalid number argument" << std::endl;
        return (false);
    }
    std::string fileName = argv[1];
    if (fileName == "")
    {
        std::cout << "Invalid argument FILENAME" << std::endl;
        return (false);
    }
    std::string s1 = argv[2];
    if (s1 == "")
    {
        std::cout << "Invalid argument s1" << std::endl;
        return (false);
    }
    std::string s2 = argv[3];
    if (s2 == "")
    {
        std::cout << "Invalid argument s2" << std::endl;
        return (false);
    }
    return (true);
}

int main(int argc, char **argv)
{
    if ((checkErrorArgc(argc, argv)) == false)
        return (1);
    if ((checkErrorFile(argv[1], argv[2], argv[3])) == false)
        return (1);
    return (0);
}