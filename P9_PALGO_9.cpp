#include <iostream>
#include <stdio.h>
using namespace std;

int faktorial(int a);
int kombinasi(int a, int b);
int main() {
    int x, y;

    cout << "\t PERHITUNGAN KOMBINASI" << endl;
    cout << "\n Masukkan Bilangan Petama: "; cin >> x;
    cout << "\n Masukkan bilangan kedua : "; cin >> y;
    cout << "\n Kombinasi " << "C" << "(" << x << "," << y << ")" << " = " << kombinasi(x,y) << endl;
}

int kombinasi (int x, int y){
    if (x < y)
        return 0;
    else
        return(faktorial(x) / (faktorial(y) * faktorial(x - y)));
}

int faktorial (int a) {
    int hasil;
    if (a <= 1)
        hasil = 1;
    else
        hasil = a * faktorial(a - 1);
    return(hasil);
}
