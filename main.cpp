#include <iostream>
using namespace std;

struct jam {
    int hour;
    int minute;
    int second;
};

void inputJam (jam &j) {
    cout << "masukan nilai hour (0-23): ";
    cin >> j.hour;
        while (j.hour < 0 || j.hour > 23){
            cout << "masukan nilai hour (0-23): ";
            cin >> j.hour;
    }

    cout << "masukan nilai minute (0-59): ";
    cin >> j.minute;
        while (j.minute < 0 || j.minute > 59){
            cout << "masukan nilai minute (0-59): ";
            cin >> j.minute;
     }

    cout << "masukan nilai second (0-59): ";
    cin >> j.second;
        while (j.second < 0 || j.second> 59){
            cout << "masukan nilai second (0-59): ";
            cin >> j.second;
        }
}

void cetak2digit(int d){
    if (d < 10){
        cout << "0";
    }
    cout << d;
}

void printHasil (jam &j){
    cout << "nilai jam 1 adalah ";
    cetak2digit(j.hour);
    cout << ":";
    cetak2digit(j.minute);
    cout << ":";
    cetak2digit(j.second);
    cout << endl;
}

void Ndetiksetelah (jam &j){
    int masukanUser;
    cout << "masukan berapa detik yang ingin di tambah : ";
    cin  >> masukanUser;

    if (masukanUser > 0){
        j.second = j.second + masukanUser;
        j.minute += j.second / 60;
        j.second = j.second % 60;
        j.hour += j.minute / 60;
        j.minute = j.minute % 60;
        cout << "nilai jam 1 setelah ditambah dengaan masukan user adalah ";
        cetak2digit(j.hour);
        cout << ":";
        cetak2digit(j.minute);
        cout << ":";
        cetak2digit(j.second); 
        cout << endl;   
    }
}
void konversiDetikKeJam (jam &j){
    int totalDetik;
    cout << "masukan berapa detik yang akan di konversi : ";
    cin >> totalDetik;

    j.hour = totalDetik / 3600;
    totalDetik = totalDetik % 3600;

    j.minute = totalDetik / 60;
    j.second = totalDetik % 60;

    cout << "hasil konversi: ";
    cetak2digit(j.hour);
    cout << ":";
    cetak2digit(j.minute);
    cout << ":";
    cetak2digit(j.second);
    cout << endl;
}
int main (){
    jam j1;
    inputJam (j1);
    printHasil (j1);
    Ndetiksetelah (j1);
    konversiDetikKeJam (j1);
    return 0;
}