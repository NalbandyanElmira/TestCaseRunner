#include <iostream>
#include <string>
#include <cstdlib>

int main(){
	std::string file_name;
	std::cout << "Enter the name of the file: ";
	std::cin >> file_name;
	std::string extension = file_name.substr(file_name.find_last_of(".") + 1);
	if(extension == "cpp"){
		system("g++ main.cpp check.cpp");
		system("./a.out");
	}
	else if(extension == "py"){
		system("python3 check.py");
	}
	else if(extension == "java"){
		system("javac check.java");
		system("java check");
	}
	else if(extension == "js"){
		system("node check.js");
	}
	else{
		std::cout << "Wrong source file." << std::endl;
	}
}