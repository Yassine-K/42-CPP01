/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 10:48:17 by ykhayri           #+#    #+#             */
/*   Updated: 2023/12/24 10:55:17 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ostream>

int	main() {
	std::string myName = "HI THIS IS BRAIN", *stringPTR = &myName;;
	std::string& stringREF = myName;
	
	std::cout << "Address:" << std::endl;
	std::cout << &myName << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;
	
	std::cout << std::endl << "Value:" << std::endl;
	std::cout << myName << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
	return 0;
}