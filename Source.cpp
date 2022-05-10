#include <iostream>
#include <string>
#include <fstream>
#include "Function.h"

using namespace std;


int main() {
	/*//Task 1
	ofstream out;
	out.open("file.txt", ios::app);
	if (out.is_open()) {
		string input;
		do {
			cout << "Input string: ";
			getline(cin, input);
			out << input << "\n";

		} while (input != "end");
	}
	else
		cout << "File opening error\n";
	out.close();


	ifstream in;
	in.open("file.txt");
	if (in.is_open()) {
		while (!in.eof()) {
			string str;
			getline(in, str);
			cout << str << endl;
		}
	}
	else
		cout << "File opening error\n";
	in.close();


	remove("file.txt");*/

	//Task 2
	string path;
	string text;
	cout << "Enter the path to the file: ";
	getline(cin, path);
	cout << "Enter the text: ";
	getline(cin, text);
	owerwrite(path, text);



	return 0;
}