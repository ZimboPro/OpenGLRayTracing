/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Factory.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-jage   <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 10/56/07 by lde-jage          #+#    #+#             */
/*   Updated: 2018/07/27 10/56/07 by lde-jage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Factory.hpp>

Factory::Factory() {}

Factory::Factory(Factory const & src) {
	*this = src;	
}

Factory::~Factory() {}

Factory & Factory::operator=(Factory const & src) {
	if (this != &src)
    {
	*this = src;
    }
	return (*this);
}

