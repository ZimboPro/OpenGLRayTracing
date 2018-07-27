/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Calculate.cpp                                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-jage   <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 13/31/28 by lde-jage          #+#    #+#             */
/*   Updated: 2018/07/27 13/31/28 by lde-jage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Calculate.hpp>
#include <math.h>

Calculate::Calculate() {}

Calculate::Calculate(Calculate const & src)
{
	*this = src;	
}

Calculate::~Calculate()
{}

Calculate & Calculate::operator=(Calculate const & src)
{
	if (this != &src)
    {
		*this = src;
    }
	return (*this);
}

float	distBetweenVecAndPoint(glm::vec4 &point, glm::vec4 &dir, glm::vec4 & origin)
{
	glm::vec3 toPoint = point - origin;
	glm::vec3 vec = dir;
	glm::vec3 ans = glm::cross(toPoint, vec);
	return (ans.length / vec.length);
}

float	distBetween2Vec(glm::vec4 &origin1, glm::vec4 &dir1, glm::vec4 &origin2, glm::vec4 & dir2)
{

}

float	distBetweenVecAndPlane(glm::vec4 &point, glm::vec4 &plane, glm::vec4 &origin, glm::vec4 & dir)
{

}
