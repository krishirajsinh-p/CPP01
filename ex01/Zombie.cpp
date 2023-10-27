/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 23:36:42 by kpuwar            #+#    #+#             */
/*   Updated: 2023/10/27 02:27:54 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
	cout << "Default constructor is called."<< endl;
}

Zombie::~Zombie() {
	cout << "Default destructor is called for " << this->name << endl;
}

void Zombie::setName(string name) {
	this->name = name;
}

void Zombie::announce(void) {
	cout << this->name << ":  BraiiiiiiinnnzzzZ..." << endl;
}
