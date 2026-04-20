#include <iostream>
using namespace std;

class Barang{
    public :
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;

 void printData(){
        cout << "Nama : " << nama << endl;
        cout << "Jumlah : " << jumlah << endl;
        cout << "Kategori : " << kategori << endl;
        cout << "TanggalProduksi : " << tanggalProduksi << endl;
    }
}; //batas class

int main(){
    Barang elektronik;
    elektronik.nama = "Televisi";
    elektronik.jumlah = 1;
    elektronik.kategori = "Elektronik";
    elektronik.tanggalProduksi = "2-Desember-2001";

    elektronik.printData();
    cout << endl;


    Barang nonElektronik;
    nonElektronik.nama = "Kasur";
    nonElektronik.jumlah = 1;
    nonElektronik.kategori = "nonElektronik";
    nonElektronik.tanggalProduksi = "4-Januari-2003";

    nonElektronik.printData();
}