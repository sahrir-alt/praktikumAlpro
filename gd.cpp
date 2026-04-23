#include <iostream>
using namespace std;
int main (){
    int arr[2][3] = {{10, 11, 12}, {20, 21, 22}};
    int *p;
    p = arr[1];

    cout << *p << endl;
    cout << *(p + 1) << endl;
    cout << *(p + 2) << endl;
    cout << *(p + 3) << endl;
    cout << *(p + 4) << endl;
    cout << *(p + 5) << endl;
    return 0;
}