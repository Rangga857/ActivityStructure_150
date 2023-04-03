#include <iostream>
using namespace std;

struct AlamatDetail
{
	string desa;
	string kota;
};

struct Mahasiswa
{
	string NIM;
	string nama;
	AlamatDetail alamat;
	int umur;
};

int main() {
	Mahasiswa mhs;
	
	cout << "Masukkan NIM = ";
	cin >> mhs.NIM;
	cout << "Masukkan nama = ";
	cin >> mhs.nama;
	cout << "alamat = ";
	cout << "\n\tMasukkan Desa = ";
	cin >> mhs.alamat.desa;
	cout << "\tMasukkan Kota = ";
	cin >> mhs.alamat.kota;
	cout << "Masukkan umur = ";
	cin >> mhs.umur;

	cout << "\n\nNIM = " << mhs.NIM;
	cout << "\nnama = " << mhs.nama;
	cout << "\nDesa = " << mhs.alamat.desa;
	cout << "\nKota = " << mhs.alamat.kota;
	cout << "\numur = " << mhs.umur;

}