#include <iostream>
using namespace std;

struct AlamatDetail {
	char Desa[20];
	char Kota[20];
};

struct Mahasiswa {
	char NIM[12];
	char Nama[20];
	AlamatDetail Alamat;
	int umur;
};

int main() {
	Mahasiswa mhs[3];

	for (int i = 0; i < 3; i++0) {
		cout << "masukkan NIM : ";
		cin.getline(mhs[i].NIM, 12);
		cout << "masukkan Nama : ";
		cin.getline(mhs[i].Nama, 12);
		cout << "masukkan Alamat" << endl;
		cout << "masukkan desa : ";
		cin.getline(mhs[i].Alamat.Desa, 12);
		cout << "masukkan Kota : ";
		cin.getline(mhs[i].Alamat.Kota, 12);
		cout << "masukkan umur : ";
		cin >> mhs[i].umur;
		cin.ignore(1, '\n');
	}

}