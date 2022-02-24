/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagrivan <nagrivan@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 16:18:56 by nagrivan          #+#    #+#             */
/*   Updated: 2022/01/28 17:11:36 by nagrivan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void) {
	
}

Karen::~Karen(void) {
	
}

void    Karen::other(void)
{
    std::cout << "What the fuck is it?" << std::endl;
}

void    Karen::debug(void)
{
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void    Karen::info(void)
{
    std::cout << "I cannot believe adding extra bacon cost more money. You don't put enough! If you did I would not have to ask for it!" << std::endl;
}

void    Karen::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming here for years and you just started working here last month." << std::endl;
}

void    Karen::error(void)
{
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void    Karen::complain(std::string level)
{
    int     indexFunction = 0;
    void    (Karen::*arrayFunc[5])(void) = { &Karen::other, &Karen::debug,  &Karen::info, &Karen::warning, &Karen::error };
    
    level == "DEBUG" && (indexFunction = 1);
    level == "INFO" && (indexFunction = 2);
    level == "WARNING" && (indexFunction = 3);
    level == "ERROR" && (indexFunction = 4);

    enum Level {
        OTHER,
        DEBUG,
        INFO,
        WARNING,
        ERROR
    };

    switch (indexFunction)
    {
    case DEBUG:
        std::cout << "[ DEBUG ]" << std::endl;
        (this->*arrayFunc[DEBUG])();
        std::cout << std::endl;
    case INFO:
        std::cout << "[ INFO ]" << std::endl;
        (this->*arrayFunc[INFO])();
        std::cout << std::endl;
    case WARNING:
        std::cout << "[ WARNING ]" << std::endl;
        (this->*arrayFunc[WARNING])();
        std::cout << std::endl;
    case ERROR:
        std::cout << "[ ERROR ]" << std::endl;
        (this->*arrayFunc[ERROR])();
        std::cout << std::endl;
        break ;

    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        break;
    }
}
