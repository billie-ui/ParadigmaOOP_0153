#include <iostream>
using namespace std;

class barang
{
public :
    string nama;
    int jumlah;
    string kategori;
    string tanggal_produksi;

void printdata()
    {
        cout << "Nama : " << nama << endl;
        cout << "Jumlah : " << jumlah << endl;
        cout << "Kategori : " << kategori << endl;
        cout << "Tanggal Produksi : " << tanggal_produksi << endl;
    }
};

int main ()
{
    barang elektronik;
    barang NoNelektronik;

    elektronik.nama = "xiaomi";
    elektronik.jumlah = 1;
    elektronik.kategori = "Handphone";
    elektronik.tanggal_produksi = "17 Agustus 2025";

    NoNelektronik.nama = "Karambit";
    NoNelektronik.jumlah = 1;
    NoNelektronik.kategori = "Pisau";
    NoNelektronik.tanggal_produksi = "02 April 2026";

    elektronik.printdata();
    NoNelektronik.printdata();
}

