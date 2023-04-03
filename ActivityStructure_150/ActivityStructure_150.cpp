#include <iostream>
using namespace std;

struct mahasiswa
{
	string NIM;
	string nama;
	string alamat;
	int umur;
};

int main() {
	mahasiswa mhs1, mhs2;

	mhs1.NIM = "20220140150";
	mhs1.nama = "Wicaksono";
	mhs1.alamat = "jogja";
	mhs1.umur = 20;

	cout << "Masukkan NIM : ";
	cin >> mhs2.NIM;
	cout << "Masukkan nama : ";
	cin >> mhs2.nama;
	cout << "Masukkan alamat : ";
	cin >> mhs2.alamat;
	cout << "Masukkan umur : ";
	cin >> mhs2.umur;



}