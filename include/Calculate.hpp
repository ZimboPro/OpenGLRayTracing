/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Calculate.hpp                                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-jage   <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 13/31/28 by lde-jage          #+#    #+#             */
/*   Updated: 2018/07/27 13/31/28 by lde-jage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		CALCULATE_HPP
# define	CALCULATE_HPP

#include <glm.hpp>

class Calculate {
	public:
		Calculate();
		Calculate(Calculate const & src);
		~Calculate();
		Calculate & operator=(Calculate const & src);

		static float	distBetweenVecAndPoint(glm::vec4 &point, glm::vec4 &dir, glm::vec4 & origin);
		static float	distBetween2Vec(glm::vec4 &origin1, glm::vec4 &dir1, glm::vec4 &origin2, glm::vec4 & dir2);
		static float	distBetweenVecAndPlane(glm::vec4 &point, glm::vec4 &plane, glm::vec4 &origin, glm::vec4 & dir);
};

#endif
