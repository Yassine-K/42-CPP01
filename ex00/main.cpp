/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 09:14:16 by ykhayri           #+#    #+#             */
/*   Updated: 2023/12/24 10:08:43 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.h"

int main(void) {
	Zombie *myZm;
	std::string names[5] = {"Imp", "Nimbus", "Raa", "Odin", "Freya"};

	for (int i = 0; i < 5; i++) {
		if (i % 2)
		{
			myZm = newZombie(names[i]);
			myZm->announce();
			delete myZm;
		}
		else
			randomChump(names[i]);
	}
	return 0;
}
