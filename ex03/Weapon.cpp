/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 03:20:21 by kpuwar            #+#    #+#             */
/*   Updated: 2023/10/27 04:38:41 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(string type) {
	this->type = type;
}

void Weapon::setType(string type) {
	this->type = type;
}

const string& Weapon::getType(void) {
	return this->type;
}
