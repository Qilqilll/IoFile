#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string baris;

	ofstream outfile;
	outfile.open("contohfile.txt");

	cout << ">= Menulis File, \'q\q untuk Keluar " << endl;

	//unlimited loop untuk menulis
	while (true) {
		cout << "- ";
		//mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		//loop akan berhenti jika anda memasukan karakter q
		if (baris == "q") break;
		//menulis dan memasukan nilai dari 'baris' ke dalam file
		outfile << baris << endl;
	}
	