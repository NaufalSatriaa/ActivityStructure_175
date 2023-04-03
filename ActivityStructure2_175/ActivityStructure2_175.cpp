#include <iostream>
using namespace std;

struct AlamatDetail {
	string Desa;
	string Kota;
};

struct Mahasiswa {
	string NIM;
	string Nama;
	AlamatDetail Alamat;
	int umur;
};

int main() {
	Mahasiswa mhs;

	cout << "Masukkan NIM : ";
	cin >> mhs.NIM;
	cout << "Masukkan Nama : ";
	cin >> mhs.Nama;
	cout << "Mauskkan Alamat" << endl;
	cout << "Masukkan Desa : ";
	cin >> mhs.Alamat.Desa;
	cout << "Masukkan Kota : ";
	cin >> mhs.Alamat.Kota;
	cout << "Masukkan Umur : ";
	cin >> mhs.umur;
}