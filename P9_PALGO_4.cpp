#include <iostream>
using namespace std;

int fakt (int a);
int main(){

    int z, x;

    cout << " Masukkan Angka    = "; cin >> z;
    cout << " Deretnya          = ";

    for (x = z + 1; x > 1; x--){
        cout << x - 1 << " x ";
    }
    cout << "\nHasilnya         = " << fakt(z) << endl;
}

int fakt (int a) {
    if (a <= 1)
        a = 1;
    else
        a = a * (fakt(a - 1));
    return (a);
}
