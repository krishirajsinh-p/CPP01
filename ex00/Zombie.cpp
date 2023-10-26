/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 23:36:42 by kpuwar            #+#    #+#             */
/*   Updated: 2023/10/27 00:13:11 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie() {
	cout << "Destructor for Zombie named " << name << " is called." << endl;
}

void Zombie::setName(string name) {
	this->name = name;
}

const string& Zombie::getName(void) {
	return this->name;
}

void Zombie::announce(void) {
	cout << this->name << ":  BraiiiiiiinnnzzzZ..." << endl;
}
