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
}