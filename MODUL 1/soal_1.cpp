#include <iostream>
using namespace std;
int main (){
    // Deklarasi variabel.
    int hargaBeras, hargaTelur, hargaMinyakGoreng, totalBelanja, totalPajak, totalAkhirBelanja, uangPelanggan, kembalian;
    int seratus = 100000, limaPuluh = 50000, duapuluh = 20000, sepuluh = 10000, limaribu = 5000, seribuKertas = 1000, seribuKoin = 1000, limaratusKoin = 500, duaratusKoin = 200, seratusKoin = 100;
    int n100k, n50k, n20k, n10k, n5k, n1k, k1k, k500, k200, k100;

    cout << "============================================\n";
    cout << "|         TOKO SEMBAKO JAYA ABADI          |\n";
    cout << "============================================\n";
    cout << "[Bina]: Than, masukan harga barangnya Rendy di program ini!\n";

    // Input Harga Beras, Telur, dan Minyak goreng dari pelanggan.
    cout << "masukan harga Beras (Rp.)         : ";
    cin >> hargaBeras;
    cout << "masukan harga Telur (Rp.)         : ";
    cin >> hargaTelur;
    cout << "masukan harga Minyak Goreng (Rp.) : ";
    cin >> hargaMinyakGoreng;
    cout << "--------------------------------------------\n";

    // Hitung total belanja, total pajak, dan total akhir belanja. 
    totalBelanja = hargaBeras + hargaTelur + hargaMinyakGoreng; totalPajak = totalBelanja * 25 / 100;
    totalAkhirBelanja = totalBelanja + totalPajak;
    
    // Menampilkan Total akhir Belanja + Pajak.
    cout << "Total Belanja (+ PPN 25%)         : " << totalAkhirBelanja << "\n";

    // Hitung uang kembalian.
    cout << "--------------------------------------------\n";
    cout << "Terima uang dari pelanggan (Rp.) : ";
    cin >> uangPelanggan;
    kembalian = uangPelanggan - totalAkhirBelanja;

    // Menampilkan Stuk Kembalian
    cout << "============================================\n" ;
    cout << "|              STRUK KEMBALIAN             |\n" ;
    cout << "============================================\n" ;
    cout << "[Bina]: Nih, Than. Rincian kembaliannya : "; 
    cout << "Total Kembalian : Rp. "  << kembalian << "\n";
    
    n100k = kembalian / seratus; kembalian %= seratus;
    n50k = kembalian / limaPuluh; kembalian %= limaPuluh;
    n20k = kembalian / duapuluh; kembalian %= duapuluh;
    n10k = kembalian / sepuluh; kembalian %= sepuluh;
    n5k = kembalian / limaribu; kembalian %= limaribu;
    n1k = kembalian / seribuKertas; kembalian %= seribuKertas;
    k1k = kembalian / seribuKoin; kembalian %= seribuKoin;
    k500 = kembalian / limaratusKoin; kembalian %= limaratusKoin;
    k200 = kembalian / duaratusKoin; kembalian %= duaratusKoin;
    k100 = kembalian / seratusKoin; kembalian %= seratusKoin;
    cout << "--------------------------------------------\n";

    cout << "- Rp 100.000  : " << n100k << " lembar\n";
    cout << "- Rp 50.000   : " << n50k << " lembar\n";
    cout << "- Rp 20.000   : " << n20k << " lembar\n" ;
    cout << "- Rp 10.000   : " << n10k<< " lembar\n";
    cout << "- Rp 5.000    : " << n5k << " lembar\n";
    cout << "- Rp 1.000    : " << n1k << " lembar\n";
    cout << "- Rp 1.000    : " << k1k << " koin\n";
    cout << "- Rp 500      : " << k500 << " koin\n";
    cout << "- Rp 200      : " << k200 << " koin\n";
    cout << "- Rp 100      : " << k100 << " koin\n";
    cout << "--------------------------------------------\n";

    cout << "[Fathan]: Aman! Sisa Receh tak terpercaya: " << kembalian << "\n";
    cout << "ini mau di Donasikan ga Ren?" << "\n";
    cout << "[Rendy]: GAS" << "\n";
    cout << "============================================\n";
    return 0;
}