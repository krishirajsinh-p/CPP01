/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 22:29:26 by kpuwar            #+#    #+#             */
/*   Updated: 2023/10/27 02:23:28 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Zombie {
	private:
		string name;

	public:
		Zombie();
		~Zombie();
		void setName(string name);
		void announce(void);
};

Zombie* zombieHorde(int N, string name);

#endif
