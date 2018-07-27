/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Plane.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-jage   <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 09/33/24 by lde-jage          #+#    #+#             */
/*   Updated: 2018/07/27 09/33/24 by lde-jage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Plane.hpp>

Plane::Plane() : Shape (){}

Plane::Plane(Plane const & src) : Shape ()
{
	*this = src;	
}

Plane::~Plane() {}

Plane & Plane::operator=(Plane const & src)
{
	if (this != &src)
    {
		Shape::operator=(src);
		*this = src;
    }
	return (*this);
}

