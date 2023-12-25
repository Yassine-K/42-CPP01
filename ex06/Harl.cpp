/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 12:08:51 by ykhayri           #+#    #+#             */
/*   Updated: 2023/12/25 12:39:31 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug( void ) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info( void ) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning( void ) {
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error( void ) {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain( std::string level ) {
	std::string init = "DIWE";
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	size_t ind;
	
	ind = init.find(level[0]);
	if (ind != std::string::npos && level == levels[ind])
	{
		std::cout << "[ " + level + " ]" << std::endl;
		switch (ind) {
			case 0:
				this->debug();
			case 1:
				this->info();
			case 2:
				this->warning();
			case 3:
				this->error();
				break ;
		}
		
		return ;
	}
	std::cout << "[ Probably complaining about insignificant problems ]";
}	