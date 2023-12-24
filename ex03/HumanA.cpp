/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 11:46:42 by ykhayri           #+#    #+#             */
/*   Updated: 2023/12/24 12:19:47 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& w) : weap(w), name(name) {}

HumanA::~HumanA() {}

void	HumanA::attack() {
	std::cout << name << " attacks with their " << weap.getType() << std::endl;
}