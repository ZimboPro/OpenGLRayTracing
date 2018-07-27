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

Plane::Plane() {}

Plane::Plane(Plane const &src)
{
	*this = src;
}

Plane::~Plane() {}

Plane &Plane::operator=(Plane const &src)
{
	if (this != &src)
	{
		*this = src;
	}
	return (*this);
}

void Plane::updateDrawMode(DrawMode mode)
{
	this->_mode = mode;
}

void Plane::updateTransparency(float &trans)
{
	float temp = trans;
	this->_trans = temp;
}

void Plane::updateElipson(float &trans)
{
	float temp = trans;
	this->_elipson = temp;
}

void Plane::updateReflective(float &reflect)
{
	float temp = reflect;
	this->_reflect = temp;
}

void Plane::updatePosition(glm::vec4 &point)
{
	glm::vec4 temp = point;
	this->_point = temp;
}

void Plane::updateDirection(glm::vec4 &dir)
{
	glm::vec4 temp = dir;
	this->_dir = temp;
}

void Plane::translatePostion(glm::mat4x4 &trans)
{}

void Plane::rotatePostion(glm::mat4x4 &rot)
{}

bool Plane::doesIntersectAndDistance(glm::vec4 & origin, glm::vec4 &dir, float &dist, glm::vec4 &point)
{}

Col Plane::colorAtPoint(glm::vec4 &point, glm::vec4 & dir, int8_t count)
{}
