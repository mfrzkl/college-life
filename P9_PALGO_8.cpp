#include <iostream>
#include <stdio.h>
using namespace std;

int faktorial(int a);
int permutasi(int a, int b);
int main() {
    int n, r;

    cout << "\t PERHITUNGAN PERMUTASI" << endl;
    cout << "\n Masukkan Bilangan Petama: "; cin >> n;
    cout << "\n Masukkan bilangan kedua : "; cin >> r;
    cout << "\n Permutasi " << "P" << "(" << n << "," << r << ")" << " = " << permutasi(n,r) << endl;
}

int permutasi (int n, int r){
    if (n < r)
        return 0;
    else
        return(faktorial(n) / faktorial(n - r));
}

int faktorial (int a) {
    int hasil;
    if (a <= 1)
        hasil = 1;
    else
        hasil = a * faktorial(a - 1);
    return(hasil);
}
