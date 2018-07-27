/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Loop.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-jage   <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 10/56/20 by lde-jage          #+#    #+#             */
/*   Updated: 2018/07/27 10/56/20 by lde-jage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Loop.hpp>

Loop::Loop() {}

Loop::Loop(Loop const & src) {
	*this = src;	
}

Loop::~Loop() {}

Loop & Loop::operator=(Loop const & src) {
	if (this != &src)
    {
	*this = src;
    }
	return (*this);
}

