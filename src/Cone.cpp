/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cone.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-jage   <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 09/33/24 by lde-jage          #+#    #+#             */
/*   Updated: 2018/07/27 09/33/24 by lde-jage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cone.hpp>

Cone::Cone() : Shape (){}

Cone::Cone(Cone const & src) : Shape ()
{
	*this = src;	
}

Cone::~Cone() {}

Cone & Cone::operator=(Cone const & src)
{
	if (this != &src)
    {
		Shape::operator=(src);
		*this = src;
    }
	return (*this);
}

