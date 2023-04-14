#include <stdio.h>
#include <iostream>
using namespace std;

int tambah (int var1, int var2) {
    return var1 + var2;
}

string tambah (string var1, string var2) {
    return "test...";
}

int main() {
    cout << tambah(1,2) << endl;
    cout << tambah(5,4) << endl;
    return 0;
}
