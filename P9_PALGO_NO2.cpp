#include <iostream>
#include <stdio.h>
using namespace std;

int faktorial(int a);
int permutasi(int n, int k);
int kombinasi(int n, int k);

int main() {
    char pilihan;
    int n, k;
    bool ulang = true;

    while (ulang) {
        cout << "\t ============================================" << endl;
        cout << "Program menghitung Permutasi atau Kombinasi" << endl;
        cout << "Menggunakan Konsep Rekursif" << endl;
        cout << "Oleh : Miftah Rizky Aulia(2210511022)" << endl;
        cout << "=============================================" << endl;
        cout << "\nPilihan P (Permutasi) atau C (Kombinasi) : "; cin >> pilihan;


        if (pilihan == 'P' || pilihan == 'p') {
            cout << "\n Masukkan nilai n: "; cin >> n;
            cout << "\n Masukkan nilai k: "; cin >> k;
            cout << "\n Permutasi (" << n << "," << k << ") = " << permutasi(n,k) << endl;
        } else if (pilihan == 'C' || pilihan == 'c') {
            cout << "\n Masukkan nilai n: "; cin >> n;
            cout << "\n Masukkan nilai k: "; cin >> k;
            cout << "\n Kombinasi (" << n << "," << k << ") = " << kombinasi(n,k) << endl;
        } else {
            cout << "\n Pilihan tidak valid." << endl;
        }

        cout << "\nIngin Input lagi? [Y/N]: ";
        cin >> pilihan;
        if (pilihan == 'Y' || pilihan == 'y') {
            ulang = true;
        } else {
            ulang = false;
        }
    }

    return 0;
}

int faktorial(int a) {
    int hasil;
    if (a <= 1)
        hasil = 1;
    else
        hasil = a * faktorial(a - 1);
    return(hasil);
}

int permutasi(int n, int k){
    if (n < k)
        return 0;
    else
        return faktorial(n) / faktorial(n - k);
}

int kombinasi(int n, int k){
    if (n < k)
        return 0;
    else
        return faktorial(n) / (faktorial(k) * faktorial(n - k));
}
