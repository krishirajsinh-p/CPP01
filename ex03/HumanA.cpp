/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 03:34:12 by kpuwar            #+#    #+#             */
/*   Updated: 2023/10/27 05:21:19 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(string name, Weapon& weapon) : name(name), weapon(weapon) {
	
}

void HumanA::attack() {
	cout << this->name << " attacks with their " << this->weapon.getType() << endl;
}
