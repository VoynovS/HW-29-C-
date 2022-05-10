#include <iostream>
#include <string>
#include <fstream>
#include "Function.h"

bool owerwrite(std::string& str, std::string& str2)
{
	std::ofstream out;
	out.open(str, std::ios::out);
	if (out.is_open()) {
		out << str2;
		out.close();
		std::cout << "The replacement was successful";
		return true;
	}
	else {
		std::cout << "The file doesn't open or it doesn't exist.";
		return false;
	}
}
