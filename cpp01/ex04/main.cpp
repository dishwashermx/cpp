#include <fstream>
#include <iostream>
#include <sstream>

int	main(int argc, char** argv) {
	if (argc != 4) {
		std::cout << "ERROR\nincorrect parameters\n";
		return (1);
	}
	const std::string& filename = argv[1];
	const std::string& s1 = argv[2];
	const std::string& s2 = argv[3]; 
	std::ifstream inputFile(filename);
	if (!inputFile.is_open()) {
		std::cerr << "ERROR\nUnable to open file: " << filename << std::endl;
		return (1);
	}
	std::ofstream outputFile(filename + ".replace");
	if (!outputFile.is_open()) {
		std::cerr << "ERROR\nUnable to create file: " << filename << std::endl;
		return (1);
	}
	std::string line;
	while (std::getline(inputFile, line)) {
		size_t pos = 0;
		std::string newLine;
		while ((pos = line.find(s1, pos)) != std::string::npos) {
			newLine += line.substr(0, pos) + s2;
			pos += s1.length();
			line = line.substr(pos);
			pos = 0;
		}
		newLine += line;
		outputFile << newLine << std::endl;
	}
	inputFile.close();
	outputFile.close();
}