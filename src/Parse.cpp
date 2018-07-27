/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parse.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-jage   <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 10/55/53 by lde-jage          #+#    #+#             */
/*   Updated: 2018/07/27 10/55/53 by lde-jage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Parse.hpp>

Parse::Parse() {}

Parse::Parse(Parse const & src) {
	*this = src;	
}

Parse::~Parse() {}

Parse & Parse::operator=(Parse const & src) {
	if (this != &src)
    {
		*this = src;
    }
	return (*this);
}

