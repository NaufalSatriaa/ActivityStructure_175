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
	cout << "\tMasukkan Desa : ";
	cin >> mhs.Alamat.Desa;
	cout << "\tMasukkan Kota : ";
	cin >> mhs.Alamat.Kota;
	cout << "Masukkan Umur : ";
	cin >> mhs.umur;

	cout << "\nNIM : " << mhs.NIM;
	cout << "\nNama : " << mhs.Nama;
	cout << "\ndesa : " << mhs.Alamat.Desa;
	cout << "\nkota : " << mhs.Alamat.Kota;
	cout << "\nUmur : " << mhs.umur;
}