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
#include <Calculate.hpp>

Sphere::Sphere() {}

Sphere::Sphere(Sphere const &src)
{
	*this = src;
}

Sphere::~Sphere() {}

Sphere &Sphere::operator=(Sphere const &src)
{
	if (this != &src)
	{
		*this = src;
	}
	return (*this);
}

void Sphere::updateDrawMode(DrawMode mode)
{
	this->_mode = mode;
}

void Sphere::updateTransparency(float &trans)
{
	float temp = trans;
	this->_trans = temp;
}

void Sphere::updateElipson(float &trans)
{
	float temp = trans;
	this->_elipson = temp;
}

void Sphere::updateReflective(float &reflect)
{
	float temp = reflect;
	this->_reflect = temp;
}

void Sphere::updatePosition(glm::vec4 &point)
{
	glm::vec4 temp = point;
	this->_point = temp;
}

void Sphere::updateDirection(glm::vec4 &dir)
{
	glm::vec4 temp = dir;
	this->_dir = temp;
}

void Sphere::translatePostion(glm::mat4x4 &trans)
{

}

void Sphere::rotatePostion(glm::mat4x4 &rot)
{}

bool Sphere::doesIntersectAndDistance(glm::vec4 & origin, glm::vec4 &dir, float &dist, glm::vec4 &point)
{
	dist = Calculate::distBetweenVecAndPoint(this->_point, dir, origin);
	if (this->_rad >= dist)
	{
		point = origin + dist * dir;
		return true;
	}
	return (false);
}

Col Sphere::colorAtPoint(glm::vec4 &point, glm::vec4 & dir, int8_t count)
{}
