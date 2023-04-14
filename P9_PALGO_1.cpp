#include <stdio.h>
#include <iostream>
using namespace std;

int hitung (int b);
long hitung (long c);
float hitung (float c);

int main() {

    cout << " Hasilnya Fungsi Overload -1 : ";
    cout << hitung(5) << endl;
    cout << " Hasilnya Fungsi Overload -2 : ";
    cout << hitung(6) << endl;
    cout << " Hasilnya Fungsi Overload -3 : ";
    cout << hitung(7) << endl;
    return 0;
}

int hitung(int b) {
    return(b * b);
}

long hitung(long c) {
    return(c * c);
}

double hitung(double d) {
    return(d * d);
}
