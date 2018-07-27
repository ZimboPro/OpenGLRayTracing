/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Shape.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-jage   <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 09/32/10 by lde-jage          #+#    #+#             */
/*   Updated: 2018/07/27 09/32/10 by lde-jage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		SHAPE_HPP
# define	SHAPE_HPP

#include <Enums.hpp>
#include <glm/vec4.hpp>
#include <glm/mat4x4.hpp>
#include <Structs.hpp>

class Shape {
	public:
		virtual ~Shape();

		virtual void updateDrawMode(DrawMode mode) = 0;
		virtual void updateTransparency(float & trans) = 0;
		virtual void updateElipson(float & trans) = 0;
		virtual void updateReflective(float & reflect) = 0;
		virtual bool doesIntersect(glm::vec4 dir) = 0;
		virtual bool doesIntersectAndDistance(glm::vec4 & dir, float & dist, glm::vec4 & point) = 0;
		virtual Col  colorAtPoint(glm::vec4 & point) = 0;
		virtual void updatePosition(glm::vec4 & point) = 0;
		virtual void translatePostion(glm::mat4x4 & trans) = 0;
		virtual void rotatePostion(glm::mat4x4 & rot) = 0;
	private:

	protected:

};

#endif
