/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Light.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-jage   <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 10/40/07 by lde-jage          #+#    #+#             */
/*   Updated: 2018/07/27 10/40/07 by lde-jage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Light.hpp>

Light::Light() {}

Light::Light(Light const & src)
{
	*this = src;	
}

Light::~Light() {}

Light & Light::operator=(Light const & src)
{
	if (this != &src)
    {
		*this = src;
    }
	return (*this);
}

