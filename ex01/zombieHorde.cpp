/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 10:15:51 by ykhayri           #+#    #+#             */
/*   Updated: 2023/12/24 10:41:56 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.h"

Zombie* zombieHorde( int N, std::string name ) {
	Zombie *horde = new Zombie[N];
	for (int i = 0; i < N; i++) {
		horde[i].set_name(name);
	}
	return (horde);
}