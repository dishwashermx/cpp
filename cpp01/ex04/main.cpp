#include <fstream>
#include <iostream>
#include <sstream>

//  std::string str_find = "blablabla";
//  std::string str_replace = "nonono";

//  std::ifstream filein("C:\\Users\\myfilein.txt");
//  ofstream fileout("C:\\Users\\myfileout.txt");

//  if ( filein )
//  {
//       std::stringstream buffer;
//       buffer << file.rdbuf();
//       filein.close();
//       // Create a string variable to apply boost::regex
//       std::string readText;
//       readText = buffer.str();
//       // Regular expression finding comments
//       boost::regex re_comment(str_find);
//       // Replace via regex replace
//       std::string result = boost::regex_replace(readText, re_comment, str_replace);
//       ofstream out_file(fileout);
//       out_file << result;
//  }

int	main(void) {
	std::fstream file("example.txt", std::ios::in | std::ios::out);
	if (!file.is_open()) {
		std::cerr << "ERROR\nUnable to open file" << std::endl;
		return (1);
	}
	std::string line;
	std::cout << "Contents: " << std::endl;
	while (std::getline(file, line)) {
		std::cout << line << std::endl;
	}
	std::stringstream buffer;
	buffer << file.rdbuf();
	std::string content = buffer.str();
	 // Modify the content in memory
    // For example, let's replace all occurrences of "old" with "new"
    size_t pos = content.find("old");
    while (pos != std::string::npos) {
        content.replace(pos, 3, "new");
        pos = content.find("old", pos + 3);
    }

    // Clear the content of the file
    file.seekp(0);
    file.truncate(0);

    // Write the modified content back to the file
    file << content;

    // Close the file
    file.close();

	return (0);
}