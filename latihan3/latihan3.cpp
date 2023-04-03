#include <iostream>
using namespace std;

struct AlamatDetail
{
	char Desa[20];
	char Kota[20];
};

struct Mahasiswa
{
	char NIM[12];
	char nama[25];
	AlamatDetail alamat;
	int umur;
};

int main() {
	Mahasiswa mhs[3];

	for (int i = 0; i < 3; i++) {
		cout << "Masukkan NIM = ";
		cin.getline(mhs[i].NIM, 12);
		cout << "Masukkan nama = ";
		cin.getline(mhs[i].nama, 12);
		cout << "alamat = ";
		cout << "\n\t Masukkan Desa = ";
		cin.getline(mhs[i].alamat.Desa, 20);
		cout << "\tMasukkan Kota = ";
		cin.getline(mhs[i].alamat.Kota, 20);
		cout << "Masukkan umur = ";
		cin.ignore(1, '\n');
	}

	for (int i = 0; i < 3; i++)
	{
		cout << "\n\nNIM = " << mhs[i].NIM;
		cout << "\nnama = " << mhs[i].nama;
		cout << "\nDesa = " << mhs[i].alamat.Desa;
		cout << "\nKota = " << mhs[i].alamat.Kota;
		cout << "\numur = " << mhs[i].umur;
	}
}