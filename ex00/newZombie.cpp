/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 09:16:47 by ykhayri           #+#    #+#             */
/*   Updated: 2023/12/24 09:44:52 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.h"

Zombie* newZombie( std::string name ) {
	Zombie *myZm;
	
	myZm = new Zombie(name);
	return myZm;
}