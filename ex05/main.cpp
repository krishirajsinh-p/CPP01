/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 06:03:03 by kpuwar            #+#    #+#             */
/*   Updated: 2023/10/27 07:27:58 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

using std::cin;

int main(void)
{
	string input;
	Harl harl;

	do {
		cout << "Enter a level >> ";
		cin >> input;
		harl.complain(input);
	} while (input.compare("exit"));

	return 0;
}
