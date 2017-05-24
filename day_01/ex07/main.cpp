#include <iostream>
#include <fstream>

void replaceAll(std::string& str, const std::string& from, const std::string& to) {
	if(from.empty())
		return;
	size_t start_pos = 0;
	while((start_pos = str.find(from, start_pos)) != std::string::npos) {
		str.replace(start_pos, from.length(), to);
		start_pos += to.length();
	}
}

int main(int argc, char **argv) {
	if (argc == 4) {
		std::string	file_ex = ".replace";
		std::ofstream	ofs(argv[1] + file_ex);
		std::ifstream file(argv[1]);
		std::string str;
		if (file.is_open()) {
			while (std::getline(file, str)) {
				replaceAll(str, argv[2], argv[3]);
				ofs << str << std::endl;
			}
			file.close();
			ofs.close();
		} else {
			std::cout << "The file can not be opened." << std::endl;
		}
	}
	return 0;
}