/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 23:36:42 by kpuwar            #+#    #+#             */
/*   Updated: 2023/10/27 01:31:08 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(string name) {
	this->name = name;
}

Zombie::~Zombie() {
	cout << "Destructor for Zombie named " << name << " is called." << endl;
}

void Zombie::announce(void) {
	cout << this->name << ":  BraiiiiiiinnnzzzZ..." << endl;
}
