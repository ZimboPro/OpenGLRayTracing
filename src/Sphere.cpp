/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sphere.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-jage   <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 09/33/24 by lde-jage          #+#    #+#             */
/*   Updated: 2018/07/27 09/33/24 by lde-jage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Sphere.hpp>

Sphere::Sphere() : Shape (){}

Sphere::Sphere(Sphere const & src) : Shape ()
{
	*this = src;	
}

Sphere::~Sphere() {}

Sphere & Sphere::operator=(Sphere const & src)
{
	if (this != &src)
    {
		Shape::operator=(src);
		*this = src;
    }
	return (*this);
}

