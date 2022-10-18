#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float volume, phi=3.14;
    int r, t;

    cout << "Menghitung volume tabung" << endl;
    cout << "========================" << endl;
    cout << "Masukkan Jari - Jari tabung = ";
    cin >> r;
    cout << "Masukkan tinggi tabung = ";
    cin >> t;
    
    volume=phi*r*r*t;

    cout << "Maka volume tabungnya adalah = " << volume << endl;
    return 0;
}
