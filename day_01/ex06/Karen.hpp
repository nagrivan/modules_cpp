/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nagrivan <nagrivan@21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 16:18:49 by nagrivan          #+#    #+#             */
/*   Updated: 2021/12/20 16:23:07 by nagrivan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>

class Karen
{
private:
	void other( void );
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );

public:
	Karen(void);
	~Karen(void);
	void complain( std::string level );
};

#endif