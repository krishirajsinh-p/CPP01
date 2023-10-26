/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 22:29:26 by kpuwar            #+#    #+#             */
/*   Updated: 2023/10/27 01:47:37 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::string;

class Zombie {
	private:
		string name;

	public:
		Zombie(string name);
		~Zombie();
		void announce(void);
};

void randomChump(string name);
Zombie* newZombie(string name);

#endif
