#include <iostream>
#include <stdio.h>
using namespace std;

int fibonacci (int n) {
    if (n == 0 || n == 1) {
        return n;
    } else {
        return (fibonacci(n-1) + fibonacci(n-2));
    }
}

int main() {
    int n, i, j = 0;

    cout << " Masukkan Batas Jumlah Bilangan Fibonacci = ";
    cin >> n;
    cout << "\n Hasil Bilangan Fibonacci: \n";

    for (i = 1; i <= n; i++){
        cout << " Fibonacci Ke-" << i << ": " << fibonacci(j) << endl;
        j++;
    }
    return 0;
}
