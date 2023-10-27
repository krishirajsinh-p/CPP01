/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 06:03:06 by kpuwar            #+#    #+#             */
/*   Updated: 2023/10/27 07:30:33 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void) {
	cout << "love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << endl;
}

void Harl::info(void) {
	cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << endl;
}

void Harl::warning(void) {
	cout << "I think I deserve to have some extra bacon for free. I've been coming foryears whereas you started working here since last month." << endl;
}

void Harl::error(void) {
	cout << "This is unacceptable! I want to speak to the manager now." << endl;
}

void Harl::complain(string level) {
	func_ptr funcs[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR"};

	std::transform(level.begin(), level.end(), level.begin(), toupper);

	unsigned int i;
	for (i = 0; i < 4 && levels[i].compare(level); i++);
	if (i < 4)
		(this->*funcs[i])();
}
