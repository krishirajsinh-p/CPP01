/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 22:29:26 by kpuwar            #+#    #+#             */
/*   Updated: 2023/10/27 00:38:22 by kpuwar           ###   ########.fr       */
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
		~Zombie();
		void setName(string name);
		const string& getName(void);
		void announce(void);
};

void randomChump(string name);
Zombie* newZombie(string name);

#endif
