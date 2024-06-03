#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string baris;

	ofstream outfile;
	outfile.open("contohfile.txt");

	cout << ">= Menulis File, \'q\q untuk Keluar " << endl;

	while (true) {
