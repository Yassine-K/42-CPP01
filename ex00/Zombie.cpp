/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 09:14:20 by ykhayri           #+#    #+#             */
/*   Updated: 2023/12/24 10:04:07 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.h"

Zombie::Zombie(std::string n) {
	name = n;
}

Zombie::~Zombie() {
	std::cout << name << ": Destroyed!" << std::endl;
}


void	Zombie::announce( void ) {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
