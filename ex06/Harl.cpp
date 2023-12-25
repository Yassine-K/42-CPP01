/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 12:08:51 by ykhayri           #+#    #+#             */
/*   Updated: 2023/12/25 12:47:57 by ykhayri          ###   ########.fr       */
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
		switch (ind) {
			case 0:
				std::cout << "[ DEBUG ]" << std::endl;
				this->debug();
				std::cout << std::endl;
			case 1:
				std::cout << "[ INFO ]" << std::endl;
				this->info();
				std::cout << std::endl;
			case 2:
				std::cout << "[ WARNING ]" << std::endl;
				this->warning();
				std::cout << std::endl;
			case 3:
				std::cout << "[ ERROR ]" << std::endl;
				this->error();
				std::cout << std::endl;
				break ;
		}
		
		return ;
	}
	std::cout << "[ Probably complaining about insignificant problems ]";
}	