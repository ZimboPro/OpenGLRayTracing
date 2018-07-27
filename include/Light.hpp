/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Light.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-jage   <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 10/40/07 by lde-jage          #+#    #+#             */
/*   Updated: 2018/07/27 10/40/07 by lde-jage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		LIGHT_HPP
# define	LIGHT_HPP

#include <Structs.hpp>
#include <glm/vec4.hpp>

class Light {
	public:
		Light();
		Light(Light const & src);
		~Light();
		Light & operator=(Light const & src);
		Col color();
		glm::vec4 sourcePoint();
		
	private:

	protected:

};

#endif
