/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 09:14:20 by ykhayri           #+#    #+#             */
/*   Updated: 2023/12/24 10:40:11 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {
	private:
		std::string name;
	
	public:
		void announce( void );
		Zombie(std::string n);
		Zombie(void);
		~Zombie();
		void	set_name(std::string name);
};

#endif