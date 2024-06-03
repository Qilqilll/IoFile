#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string baris;
	string NamaFile;

	cout << "Masukan Nama File: ";
	cin >> NamaFile;

	ofstream outfile;
	outfile.open(NamaFile + ".txt", ios::out);

	cout << ">= Menulis File, \'q\' untuk Keluar" << endl;

	while (true) {
		cout << "- ";
		//mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		//loop akan berhenti jika anda memasukan karakter q
		if (baris == "q") break;
		//menulis dan memasukan nilai dari 'baris' ke dalam file
		outfile << baris << endl;
	}
	outfile.close();

	ifstream infile;
	//menunjuk ke sebuah file
	infile.open(NamaFile + ".txt", ios::in);

	cout << endl << ">= Membuka dan Membaca file " << endl;
	//jika file ada maka
	if (infile.is_open())
	{
		//melakukan perilangan setiap baris
		while (getline(infile, baris))
		{
			//dan tampilkan di sini
			cout << baris << '\n';
		}
		infile.close();
	}
	else cout << "Unable to open file";
	return 0;
}