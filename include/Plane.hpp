/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Plane.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-jage   <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 09/33/24 by lde-jage          #+#    #+#             */
/*   Updated: 2018/07/27 09/33/24 by lde-jage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		PLANE_HPP
# define	PLANE_HPP

#include <Shape.hpp>

class Plane : public Shape {
	public:
		Plane();
		Plane(Plane const & src);
		~Plane();
		Plane & operator=(Plane const & src);
	private:

	protected:

};

#endif
