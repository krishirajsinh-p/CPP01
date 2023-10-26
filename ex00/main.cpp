/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 00:06:15 by kpuwar            #+#    #+#             */
/*   Updated: 2023/10/27 01:27:16 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

using std::cin;
using std::flush;

int main(void) {
	string name;

	cout << "Creating zombie on the stack." << endl;
	cout << "Zombie name: " << flush;
	cin >> name;
	randomChump(name);

	cout << endl;

	cout << "Creating zombie on the heap." << endl;
	cout << "Zombie name: " << flush;
	cin >> name;
	Zombie *zombiPointer;
	zombiPointer = newZombie(name);
	zombiPointer->announce();
	delete zombiPointer;

	return 0;
}
