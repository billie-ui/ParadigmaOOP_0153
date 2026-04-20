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
