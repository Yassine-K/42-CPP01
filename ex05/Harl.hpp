/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 10:59:51 by ykhayri           #+#    #+#             */
/*   Updated: 2023/12/25 11:02:47 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Harl {
	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );

	public:
		void	complain( std::string level );
};