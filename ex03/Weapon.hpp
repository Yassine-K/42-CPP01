/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 11:47:04 by ykhayri           #+#    #+#             */
/*   Updated: 2023/12/24 12:30:31 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>
#include <string>

class Weapon {
	private:
		std::string type;
	
	public:
		const std::string& getType() const;
		void setType(std::string type);
		Weapon(std::string type);
		~Weapon();
};

#endif