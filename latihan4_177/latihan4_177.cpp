#include <iostream>
using namespace std;

float LuasPersegi(float p, float l) {
    return p * l;
}
float LuasLingkaran(float r) {
    return 3.14 * r * r;
}
float LuasSegitiga(float a, float t) {
    return 0.5 * a * t;
}

int main()
{
    float panjang, lebar, jejari, alas, tinggi;
    int pilihan;

    do {
        cout << "\n\n=====================" << endl;
        cout << "========= MENU ========" << endl;
        cout << "=======================" << endl;
        cout << "1. Luas Persegi" << endl;
        cout << "2. Luas Lingkaran" << endl;
        cout << "3. Luas Segitiga" << endl;
        cout << "4.EXIT" << endl;
        cout << "PILIHAN (1/2/3/4): ";
        cin >> pilihan;
        switch (pilihan) {
        case 1:
            cout << "Masukkan panjang = ";
            cin >> panjang;
            cout << "Masukkan lebar = ";
            cin >> lebar;
            cout << "Luas Persegi Panjang = " << LuasPersegi(panjang, lebar);
            break;
        case 2:
            cout << "Masukkan jari jari = ";
            cin >> jejari;
            cout << "Luas Lingkaran = " << LuasLingkaran(jejari);
            break;
        case 3:
            cout << "Masukkan alas = ";
            cin >> alas;
            cout << "Masukkan tinggi = ";
            cin >> tinggi;
            cout << "Luas segitiga = " << LuasSegitiga(alas, tinggi);
            break;
        case 4:
            break;
        default:
            cout << "PILIHAN SALAH" << endl;
            break;
        }
    } while (pilihan != 4);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
