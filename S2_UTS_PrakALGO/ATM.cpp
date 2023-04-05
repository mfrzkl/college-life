#include <iostream>
using namespace std;

const int MAX_MENU = 5; // konstanta yang menyatakan jumlah maksimum menu

void tampilkanMenu(string menu[]) {
    cout << "Pilih Menu" << endl;
    for (int i = 0; i < MAX_MENU; i++) {
        cout << i+1 << ". " << menu[i] << endl;
    }
}

void setorTunai(int *saldo) {
    cout << "Masukkan jumlah uang yang ingin Anda setor: ";
    int jumlahSetoran;
    cin >> jumlahSetoran;
    if (jumlahSetoran >= 50000 && (jumlahSetoran == 50000 || jumlahSetoran == 100000)) {
            *saldo += jumlahSetoran;
            cout << "\nJumlah Saldo: " << *saldo << endl;
    } else {
        cout << "Setoran hanya berlaku dengan nominal 50000 atau 100000" << endl;
    }
}

void lihatSaldo(int *saldo) {
    cout << "\nJumlah Saldo: " << *saldo << endl;
}

void tarikTunai(int *saldo) {
    cout << "Masukkan jumlah uang yang ingin Anda tarik: ";
    int jumlahPenarikan;
    cin >> jumlahPenarikan;
    
    if (jumlahPenarikan >= 50000 && (jumlahPenarikan == 50000 || jumlahPenarikan == 100000)) {
        if (*saldo >= jumlahPenarikan) {
            *saldo -= jumlahPenarikan;
            cout << "\nJumlah Saldo: " << *saldo << endl;
        } else {
            cout << "Saldo tidak cukup untuk melakukan penarikan." << endl;
        }
    } else {
        cout << "Penarikan hanya berlaku dengan nominal 50000 atau 100000" << endl;
    }
}

int main() {
    string menu[MAX_MENU] = {"Tarik Tunai", "Setor Tunai", "Lihat Saldo", "Keluar"};
    int saldo = 0;
    bool selesai = false; // flag untuk menandakan apakah sudah selesai atau belum
    while (!selesai) { // selama belum selesai
        tampilkanMenu(menu);
        int pilihan;
        cout << "Masukkan pilihan Anda: ";
        cin >> pilihan;
        switch (pilihan) {
            case 1:
                tarikTunai(&saldo);
                break;
            case 2:
                setorTunai(&saldo);
                break;
            case 3:
                lihatSaldo(&saldo);
                break;
            case 4:
                cout << "Terima kasih telah menggunakan layanan kami." << endl;
                selesai = true; // mengubah flag selesai menjadi true
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
                break;
        }
        cout << endl; // menambahkan baris kosong sebagai pembatas setiap kali selesai memproses pilihan
    }
    return 0;
}
