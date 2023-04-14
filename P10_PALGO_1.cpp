#include <iostream>
#include <ctype.h>
#include <cstring>
#include <stdio.h>
using namespace std;

int main() {
    char a1[50];
    char a2[50];

    cout << " Masukkan Kata - 1 = "; cin >> a1;
    cout << " Masukkan Kata - 2 = "; cin >> a2;

    strcat(a1, a2);
    cout << "\n Hasil Penggabungannya " << " " << a1 << endl;

    return 0;
}
