/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cone.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-jage   <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 09/33/24 by lde-jage          #+#    #+#             */
/*   Updated: 2018/07/27 09/33/24 by lde-jage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		CONE_HPP
# define	CONE_HPP

#include <Shape.hpp>

class Cone : public Shape {
	public:
		Cone();
		Cone(Cone const & src);
		~Cone();
		Cone & operator=(Cone const & src);

		virtual void updateDrawMode(DrawMode mode);
		virtual void updateTransparency(float & trans);
		virtual void updateElipson(float & trans);
		virtual void updateReflective(float & reflect);
		
		virtual void updatePosition(glm::vec4 & point);
		virtual void updateDirection(glm::vec4 & dir);

		virtual void translatePostion(glm::mat4x4 & trans);
		virtual void rotatePostion(glm::mat4x4 & rot);

		virtual bool doesIntersectAndDistance(glm::vec4 & origin, glm::vec4 & dir, float & dist, glm::vec4 & point);
		virtual Col  colorAtPoint(glm::vec4 & point, glm::vec4 & dir, int8_t count);
	
	private:
		glm::vec4 _point;
		glm::vec4 _dir;
		Col	_color;
		float _trans;
		float _reflect;
		float _elipson;
		DrawMode _mode;
		float _rad;
		float _height;
};

#endif
