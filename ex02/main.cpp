/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 02:37:49 by kpuwar            #+#    #+#             */
/*   Updated: 2023/10/27 03:14:27 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

int main(void) {
	string str = "HI THIS IS BRAIN";
	string* stringPTR = &str;
	string& stringREF = str;

	cout << "Memory address of the string variable: " << &str << endl;
	cout << "Memory address held by stringPTR: " << &stringPTR << endl;
	cout << "Memory address held by stringREF: " << &stringREF << endl << endl;

	cout << "Value of the string variable: " << str << endl;
	cout << "Value pointed to by stringPTR: " << stringPTR << endl;
	cout << "Value pointed to by stringREF: " << stringREF << endl;

	return 0;
}
