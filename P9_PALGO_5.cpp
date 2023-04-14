#include <iostream>
#include <stdio.h>
using namespace std;

int faktorial (int bil) {
    if(bil == 1)
        return 1;
    else
        // fungsi rekursif
        return bil * faktorial(bil - 1);
}

int main(){
    int n;

    cout << "\t Fungsi Rekursif - FAKTORIAL" << endl;
    cout << "\t ===========================" << endl;
    cout << "\n Masukkan Nilai n        = ";
    cin >> n;
    cout << "\n Faktorial " << n << "! = " << faktorial(n) << endl;

    cin.get();
}
