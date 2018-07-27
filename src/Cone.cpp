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

Cone::Cone() {}

Cone::Cone(Cone const &src)
{
	*this = src;
}

Cone::~Cone() {}

Cone &Cone::operator=(Cone const &src)
{
	if (this != &src)
	{
		*this = src;
	}
	return (*this);
}

void Cone::updateDrawMode(DrawMode mode)
{
	this->_mode = mode;
}

void Cone::updateTransparency(float &trans)
{
	float temp = trans;
	this->_trans = temp;
}

void Cone::updateElipson(float &trans)
{
	float temp = trans;
	this->_elipson = temp;
}

void Cone::updateReflective(float &reflect)
{
	float temp = reflect;
	this->_reflect = temp;
}

void Cone::updatePosition(glm::vec4 &point)
{
	glm::vec4 temp = point;
	this->_point = temp;
}

void Cone::updateDirection(glm::vec4 &dir)
{
	glm::vec4 temp = dir;
	this->_dir = temp;
}

void Cone::translatePostion(glm::mat4x4 &trans)
{}

void Cone::rotatePostion(glm::mat4x4 &rot)
{}

bool Cone::doesIntersectAndDistance(glm::vec4 & origin, glm::vec4 &dir, float &dist, glm::vec4 &point)
{}

Col ConecolorAtPoint(glm::vec4 &point, glm::vec4 & dir, int8_t count)
{}