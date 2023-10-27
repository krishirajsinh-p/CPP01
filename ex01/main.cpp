/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 01:05:28 by kpuwar            #+#    #+#             */
/*   Updated: 2023/10/27 05:25:23 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

using std::cin;
using std::flush;

int main(void) {
	string name;
	int N;

	cout << "how many zombies do you want to create? >> " << flush;
	cin >> N;
	cout << "what do you want to name your zombies? >> " << flush;
	cin >> name;

	cout << endl;
	Zombie* zombies = zombieHorde(N, name);

	cout << endl;
	for (int i = 0; i < N; i++)
		zombies[i].announce();

	cout << endl;
	delete[] zombies;

	return 0;
}
