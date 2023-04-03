#include <iostream>
using namespace std;

struct Mahasiswa {
	string NIM;
	string Nama;
	string Alamat;
	int umur;
};

int main() {
	Mahasiswa mhs1, mhs2;

	mhs1.NIM = "20210140011";
	mhs1.Nama = "Natasya";
	mhs1.Alamat = "Semarang";
	mhs1.umur = 20;

	cout << "Masukkan NIM : ";
	cin >> mhs2.NIM;
	cout << "Masukkan Nama : ";
	cin >> mhs2.Nama;
	cout << "Masukkan Alamat : ";
	cin >> mhs2.Alamat;
	cout << "Masukkan Umur : ";
	cin >> mhs2.umur;

	cout << "\nNIM : " << mhs1.NIM;
	cout << "\nNama : " << mhs1.Nama;
	cout << "\nAlamat : " << mhs1.Alamat;
	cout << "\nUmur : " << mhs1.umur;

	cout << "\nNIM : " << mhs2.NIM;
	cout << "\nNama : " << mhs2.Nama;
	cout << "\nAlamat : " << mhs2.Alamat;
	cout << "\nUmur : " << mhs2.umur;
}