/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 09:16:44 by ykhayri           #+#    #+#             */
/*   Updated: 2023/12/24 09:46:06 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.h"

void randomChump( std::string name ) {
	Zombie myZm = Zombie(name);
	myZm.announce();
}