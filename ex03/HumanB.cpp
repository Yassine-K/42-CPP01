/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 11:46:52 by ykhayri           #+#    #+#             */
/*   Updated: 2023/12/24 12:27:14 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	this -> name = name;
	weap = NULL;
}

HumanB::~HumanB() {}

void	HumanB::attack() {
	std::cout << name << " attacks with their " << weap->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& w) {
	weap = &w;
}