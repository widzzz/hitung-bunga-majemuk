#include <iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int main () {
    int jumlahModal;
    float persenBunga, jumlahWaktu, modalAkhir;
    string satuanWaktu;

    cout << "Masukkan jumlah modal...Rp";
    cin >> jumlahModal;

    if (jumlahModal <= 0)
    {
        cout << "Tidak boleh 0 atau kurang dari 0"<<endl;
        main();
        return 0;
    }

    cout << "Masukkan persen bunga (Contoh :5, 0.1)...";
    cin >> persenBunga;

    if (persenBunga <= 0)
    {
        cout << "Tidak boleh 0 atau kurang dari 0"<<endl;
        main();
        return 0;
    }

    cout << "Masukkan satuan waktu (Contoh :hari,minggu,bulan,tahun)...";
    cin >> satuanWaktu;
    cout << "Masukkan jumlah " << satuanWaktu << "...";
    cin >> jumlahWaktu;

    if (jumlahWaktu <= 0)
    {
        cout << "Tidak boleh 0 atau kurang dari 0"<<endl;
        main();
        return 0;
    }

    modalAkhir = jumlahModal * pow((1 + (persenBunga * 0.01)),jumlahWaktu);

    cout << "Jumlah modal akhir setelah " << jumlahWaktu << " " << satuanWaktu << " "
    << "adalah Rp" << fixed << setprecision(2) << modalAkhir;

    return 0;
}
