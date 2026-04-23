#include <iostream>
using namespace std;
int main (){
    int hargaBeras;
    int hargaTelur;
    int hargaMinyakGoreng;
    int totalBelanja;
    int totalPajak;
    int totalAkhirBelanja;
    int uangPelanggan;
    int kembalian;
    int seratus = 10000, limaPuluh = 50000, duapuluh = 20000, sepuluh = 10000, limaribu = 50000, seribuKertas = 1000;
    int seribuKoin = 1000, limaratusKoin = 500, duaratusKoin = 200, seratusKoin = 100;

    cout << "=====================================" << endl;
    cout << "|      TOKO SEMBAKO JAYA ABADI      |" << endl;
    cout << "=====================================" << endl;
    cout << "masukan harga barang Pelanggan!" << endl;

    cout << "masukan harga Beras (Rp.)         : ";
    cin >> hargaBeras;
    cout << "masukan harga Telur (Rp.)         : ";
    cin >> hargaTelur;
    cout << "masukan harga Minyak Goreng (Rp.) : ";
    cin >> hargaMinyakGoreng;

    cout << "---------------------------" << endl;


    cout << "harga Beras (Rp)         : " << hargaBeras << endl;
    cout << "harga Telur (Rp)         : " << hargaTelur << endl;
    cout << "harga Minyak Goreng (Rp) : " << hargaMinyakGoreng << endl;
    cout << "---------------------------" << endl;


    totalBelanja = hargaBeras + hargaTelur + hargaMinyakGoreng;
    totalPajak = totalBelanja * 25/100;
    totalAkhirBelanja = totalBelanja + totalPajak;
    
    cout << "Total Belanja (+ PPN 25%) : " << totalAkhirBelanja << endl;
    cout << "---------------------------" << endl;


    cout << "Terima uang dari pelanggan (Rp.) : ";
    cin >> uangPelanggan;

    kembalian = uangPelanggan - totalAkhirBelanja;

    cout << "=====================================" << endl;
    cout << "|          STRUK KEMBALIAN          |" << endl;
    cout << "=====================================" << endl;

    cout << "hasil kembalian : Rp. " << kembalian << endl;

    cout << "---------------------------" << endl;

    cout << "- Rp 100.000  : " << kembalian << " lembar" << endl;
    cout << "- Rp 50.000   : " << kembalian << " lembar" << endl;
    cout << "- Rp 20.000   : " << "lembar " << endl;
    cout << "- Rp 10.000   : " << "lembar" << endl;
    cout << "- Rp 5.000    : " << "lembar" << endl;
    cout << "- Rp 1.000    : " << "lembar" << endl;
    cout << "- Rp 1.000    : " << "koin" << endl;
    cout << "- Rp 500      : " << "koin" << endl;
    cout << "- Rp 200      : " << "koin" << endl;
    cout << "- Rp 100      : " << "koin" << endl;

    cout << "Aman! sisa Receh tak terpercaya: " << endl;
    cout << "ini mau di dinasikan gak?" << endl;
    cout << "GAS" << endl;
    cout << "---------------------------" << endl;
    return 0;
}