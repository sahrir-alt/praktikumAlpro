#include <iostream>
using namespace std;
int main (){
    int NIM, UTS, UAS, Tugas, jumlah_SKS, SKS_ditempuh, sisa_SKS, semester_penuh, SKS_sisa;
    char a, b;

    cout << "|=============== SISTEM NILAI AKADEMIK ===============|" << endl;
    cout << "Masukan NIM        : ";
    cin >> NIM;
    cout << "Nilai UAS          : ";
    cin >> UAS;
    cout << "Nilai UTS          : ";
    cin >> UTS; 
    cout << "Nilai Tugas        : ";
    cin >> Tugas;
    cout << "-------------------------------------------------------" << endl;

    UAS = UAS * 30;
    UTS = UTS * 40 ;
    Tugas = Tugas * 30 ;

    float nilai_akhir = UAS + UTS + Tugas;
    cout.precision(2);
    cout << fixed;
    cout << "Nilai Akhir        : "<< nilai_akhir / 100 << endl;
    cout << "Nilai Bulat Bawah  : " << (int) nilai_akhir/ 100<< endl;
    cout << "Nilai Bulat Atas   : " << (int) nilai_akhir / 100 + (int)((nilai_akhir / 100)/100) << endl;

    cout << "-------------------------------------------------------" << endl;
    jumlah_SKS = 144;
    cout << "SKS yang sudah di tempuh  : ";
    cin >> SKS_ditempuh;
    sisa_SKS = jumlah_SKS - SKS_ditempuh;
    cout << "sisa SKS                  : " << sisa_SKS << endl;
    semester_penuh = SKS_ditempuh / 18;
    cout << " Semester Penuh           : " << semester_penuh << endl;

    cout << "-------------------------------------------------------" << endl;
    cout << "kode grade (lowercase)    : ";
    cin >> a;
    b = a - 32;
    cout << "Uppercase                 : " << b << endl;
    cout << "ASCII                     : " << b+0;
    return 0;
}
