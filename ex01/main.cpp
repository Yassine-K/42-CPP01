/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 09:14:16 by ykhayri           #+#    #+#             */
/*   Updated: 2023/12/24 10:44:20 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.h"

int main(void) {
	Zombie	*myZm;
	int		N;

	N = 5;
	myZm = zombieHorde(N, "Baanni");
	for (int i = 0; i < N; i++)
	{
		myZm->announce();
	}
	delete [] myZm;
	return 0;
}
