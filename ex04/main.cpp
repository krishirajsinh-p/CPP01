/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 05:30:11 by kpuwar            #+#    #+#             */
/*   Updated: 2023/10/27 05:57:45 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::cerr;
using std::endl;
using std::string;

bool replaceStringInFile(const string& filename, const string& find, const string& replace) {
	std::ifstream inputFile(filename);
	if (!inputFile) {
		cerr << "Error: Could not open the input file " << filename << endl;
		return EXIT_FAILURE;
	}

	std::ofstream outputFile(filename + ".replace");
	if (!outputFile) {
		cerr << "Error: Could not create the output file " << filename + ".replace" << endl;
		return EXIT_FAILURE;
	}

	char currentChar;
	string matchBuffer;

	while (inputFile.get(currentChar)) {
		if (currentChar == find[matchBuffer.length()]) {
			matchBuffer += currentChar;
			if (matchBuffer == find) {
				outputFile << replace;
				matchBuffer.clear();
			}
		} else {
			if (!matchBuffer.empty()) {
				outputFile << matchBuffer;
				matchBuffer.clear();
			}
			outputFile.put(currentChar);
		}
	}

	if (!matchBuffer.empty()) {
		outputFile << matchBuffer;
	}

	inputFile.close();
	outputFile.close();

	cout << "File " << filename << " modified and saved as " << filename + ".replace" << endl;
	return EXIT_SUCCESS;
}

int main(int argc, char* argv[]) {
	if (argc != 4) {
		cerr << "Usage: " << argv[0] << " <filename> <find> <replace>" << endl;
		return EXIT_FAILURE;
	}

	string filename = argv[1];
	string find = argv[2];
	string replace = argv[3];

	return replaceStringInFile(filename, find, replace);
}
