#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
private:
    std::string ideas[100];
public:
    Brain();
    ~Brain();

    Brain(const Brain &copy);
    Brain& operator=(const Brain &copy);

    void    setIdeas(std::string newIdeas);

    void getIdeas(int number);
};

#endif