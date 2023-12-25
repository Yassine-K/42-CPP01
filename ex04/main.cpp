/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhayri <ykhayri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 12:56:54 by ykhayri           #+#    #+#             */
/*   Updated: 2023/12/25 10:56:50 by ykhayri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>


void	copyToFile(std::string& s, std::ofstream& output, std::string toFind, std::string swp) {
	size_t	findeInd;
	size_t	start;

	start = 0;
	findeInd = s.find(toFind, start);
	while (findeInd != std::string::npos && toFind.length()) {
		s = s.substr(0, findeInd) + swp + s.substr(findeInd + toFind.length());
		start = findeInd + swp.length();
		findeInd = s.find(toFind, start);
	}
	output << s;
}

void	readLines(std::ifstream& file, std::ofstream& output, std::string toFind, std::string swp) {
	std::string	tmp;
	std::string	s;
	
	tmp = "";
	while (!file.eof()) {
		std::getline(file, tmp);
		if (!file.eof())
			tmp.push_back('\n');
		if (s.back() == toFind[0])
			s.append(tmp);
		else
			s = tmp;
		copyToFile(s, output, toFind, swp);
	}
}

int main(int ac, char **av) {
	std::ifstream	file;
	std::ofstream	output;
	std::string		oName;
	
	if (ac != 4)
		return 2;
	file.open(av[1]);
	if (!file) {
		std::cout << "No such file!" << std::endl;
		return 2;
	}
	oName = av[1];
	output.open(oName + ".replace");
	readLines(file, output, av[2], av[3]);
	return 0;
}
