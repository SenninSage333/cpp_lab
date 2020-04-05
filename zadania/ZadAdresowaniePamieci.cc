#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int A;
    int B;
    float C;
    double D;
    int *K;

    unsigned long a = (unsigned long) &A;
    cout << "Adres zmiennej int A (dec): " << dec << a << endl;
    cout << "Adres zmiennej int A (hex): " << &A << endl;
    unsigned long b = (unsigned long) &B;
    cout << "Adres zmiennej int B (dec): " << dec << b << endl;
    cout << "Adres zmiennej int B (hex): " << &B << endl;
    unsigned long c = (unsigned long) &C;
    cout << "Adres zmiennej float C (dec): " << dec << c << endl;
    cout << "Adres zmiennej float C (hex): " << &C << endl;
    unsigned long d = (unsigned long) &D;
    cout << "Adres zmiennej double D (dec): " << dec << d << endl;
    cout << "Adres zmiennej double D (hex): " << &D << endl;
    unsigned long k = (unsigned long) &k;
    cout << "Adres zmiennej int* K (dec): " << dec << k << endl;
    cout << "Adres zmiennej int* K (hex): " << &K << endl;

    /* Kierunek adresowania pamiêci zalezy od architektury systemu i procesora, w moim przypadku pamiêæ adresowana jest 'w dó³' */

    return 0;
}
