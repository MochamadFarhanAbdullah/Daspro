#include <iostream> //header c++
#include <stdio.h> //header c

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    int a;
    a = 18;
    cout << a << endl;

     int u;
     float i;
     string p;

    cout << "Masukkan umur Anda= ";
    cin >> u;
    cout << "Masukkan tinggi badan Anda= "; //KALO MASUKIN NILAI FLOAT, PAKE TITIK JANGAN PAKE KOMA
    cin >> i;

    cout << "Masukkan jenis kelamin Anda= ";
    cin >> p;

    cout << "Umur Anda adalah= ";
    cout << u << endl;

    cout << "Tinggi badan Anda adalah= ";
    cout << i << endl;

    cout << "Jenis kelamin Anda adalah= ";
    cout << p << endl;

    int x=10; // inisialisasi
    int y=5;
    int z; //deklarasi
    z=x*(x+y);

    cout << z; //manggil code
    cout << endl;
    int A; //assign (deklarasi + inisiasi)
    A=150;
    cout << A ;


    return 0;
}
