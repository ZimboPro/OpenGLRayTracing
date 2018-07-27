/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sphere.hpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-jage   <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 09/33/24 by lde-jage          #+#    #+#             */
/*   Updated: 2018/07/27 09/33/24 by lde-jage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		SPHERE_HPP
# define	SPHERE_HPP

#include <Shape.hpp>

class Sphere : public Shape {
	public:
		Sphere();
		Sphere(Sphere const & src);
		~Sphere();
		Sphere & operator=(Sphere const & src);
	private:

	protected:

};

#endif
