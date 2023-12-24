/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 11:47:01 by ykhayri           #+#    #+#             */
/*   Updated: 2023/12/24 12:35:04 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
	this -> type = type;
}

Weapon::~Weapon() {}

const std::string& Weapon::getType() const{
	return type;
}

void Weapon::setType(std::string type) {
	this -> type = type;
}