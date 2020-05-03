#include <iostream>
#include <string>
#include <stdio.h>
#include <cmath>
#include "ZadKcpp.h"
using namespace std;

ZadKcpp::ZadKcpp() : liczba(0) {};

ZadKcpp::ZadKcpp(int x) : liczba(x) {};

void ZadKcpp::funcA(){
    cout << "funkcja a" << endl;
}

void ZadKcpp::funcB(){
    cout << "funkcja b" << endl;
}

void ZadKcpp::funcC(){
    cout << "funkcja c" << endl;
}

void ZadKcpp::error(){
    cout << "There is no such function" << endl;
}

void ZadKcpp::show(int argc, char* argv[]){
    for(int i = 1; i < argc; i++){
        switch(*argv[i]){
            case '1': funcA(); break;
            case '2': funcB(); break;
            case '3': funcC(); break;
            default: error(); break;
        }
    }
}

int ZadKcpp::wartoscLiczba(){
    return liczba;
}

int* ZadKcpp::wskaznikLiczba(){
    int *p = &liczba;
    return p;
}

int& ZadKcpp::referencjaLiczba(){
    return liczba;
}

int* ZadKcpp::tablica(){
    return tab;
}

void ZadKcpp::adresowaniePamieci(){
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
}

void ZadKcpp::arytmetykaWskaznikow(){
    int tab[7] = {0, 2, 4, 8, 10, 20, 30};
    int *p;
    p = tab;

    cout << "p++ przesuwa wskaznik na nastepny adres w pamieci" << endl;
    cout << "Before\ntab: ";
    for(int i = 0; i < 7; i++){
        cout << tab[i] << ", ";
    }
    cout << endl;
    cout << "p: " << *p << endl;
    p++;
    cout << "p++: " << *p << endl;
    cout << "After\ntab: ";
    for(int i = 0; i < 7; i++){
        cout << tab[i] << ", ";
    }
    cout << "\n" << endl;

    cout << "++p przesuwa wskaznik na nastepny adres w pamieci" << endl;
    cout << "Before\ntab: ";
    for(int i = 0; i < 7; i++){
        cout << tab[i] << ", ";
    }
    cout << endl;
    cout << "p: " << *p << endl;
    ++p;
    cout << "++p: " << *p << endl;
    cout << "After\ntab: ";
    for(int i = 0; i < 7; i++){
        cout << tab[i] << ", ";
    }
    cout << "\n" << endl;

    cout << "++*p inkrementuje wartosc na ktora wskazuje wskaznik" << endl;
    cout << "Before\ntab: ";
    for(int i = 0; i < 7; i++){
        cout << tab[i] << ", ";
    }
    cout << endl;
    cout << "p: " << *p << endl;
    ++*p;
    cout << "++p*: " << *p << endl;
    cout << "After\ntab: ";
    for(int i = 0; i < 7; i++){
        cout << tab[i] << ", ";
    }
    cout << "\n" << endl;

    cout << "++(*p) inkrementuje wartosc na ktora wskazuje wskaznik" << endl;
    cout << "Before\ntab: ";
    for(int i = 0; i < 7; i++){
        cout << tab[i] << ", ";
    }
    cout << endl;
    cout << "p: " << *p << endl;
    ++(*p);
    cout << "++(*p): " << *p << endl;
    cout << "After\ntab: ";
    for(int i = 0; i < 7; i++){
        cout << tab[i] << ", ";
    }
    cout << "\n" << endl;

    cout << "++*(p) inkrementuje wartosc na ktora wskazuje wskaznik" << endl;
    cout << "Before\ntab: ";
    for(int i = 0; i < 7; i++){
        cout << tab[i] << ", ";
    }
    cout << endl;
    cout << "p: " << *p << endl;
    ++*(p);
    cout << "++*(p): " << *p << endl;
    cout << "After\ntab: ";
    for(int i = 0; i < 7; i++){
        cout << tab[i] << ", ";
    }
    cout << "\n" << endl;

    cout << "*p++ przesuwa wskaznik na nastepny adres w pamieci" << endl;
    cout << "Before\ntab: ";
    for(int i = 0; i < 7; i++){
        cout << tab[i] << ", ";
    }
    cout << endl;
    cout << "p: " << *p << endl;
    *p++;
    cout << "*p++: " << *p << endl;
    cout << "After\ntab: ";
    for(int i = 0; i < 7; i++){
        cout << tab[i] << ", ";
    }
    cout << "\n" << endl;

    cout << "(*p)++ inkrementuje wartosc na ktora wskazuje wskaznik" << endl;
    cout << "Before\ntab: ";
    for(int i = 0; i < 7; i++){
        cout << tab[i] << ", ";
    }
    cout << endl;
    cout << "p: " << *p << endl;
    (*p)++;
    cout << "(*p)++: " << *p << endl;
    cout << "After\ntab: ";
    for(int i = 0; i < 7; i++){
        cout << tab[i] << ", ";
    }
    cout << "\n" << endl;

    cout << "*(p)++ przesuwa wskaznik na nastepny adres w pamieci" << endl;
    cout << "Before\ntab: ";
    for(int i = 0; i < 7; i++){
        cout << tab[i] << ", ";
    }
    cout << endl;
    cout << "p: " << *p << endl;
    *(p)++;
    cout << "*(p)++: " << *p << endl;
    cout << "After\ntab: ";
    for(int i = 0; i < 7; i++){
        cout << tab[i] << ", ";
    }
    cout << "\n" << endl;

    cout << "*++p przesuwa wskaznik na nastepny adres w pamieci" << endl;
    cout << "Before\ntab: ";
    for(int i = 0; i < 7; i++){
        cout << tab[i] << ", ";
    }
    cout << endl;
    cout << "p: " << *p << endl;
    *++p;
    cout << "*++p: " << *p << endl;
    cout << "After\ntab: ";
    for(int i = 0; i < 7; i++){
        cout << tab[i] << ", ";
    }
    cout << "\n" << endl;

    cout << "*(++p) przesuwa wskaznik na nastepny adres w pamieci" << endl;
    cout << "Before\ntab: ";
    for(int i = 0; i < 7; i++){
        cout << tab[i] << ", ";
    }
    cout << endl;
    cout << "p: " << *p << endl;
    *(++p);
    cout << "*(++p): " << *p << endl;
    cout << "After\ntab: ";
    for(int i = 0; i < 7; i++){
        cout << tab[i] << ", ";
    }
    cout << "\n" << endl;
}

void ZadKcpp::wywolanieFunkcji(int argc, char* argv[]){
    //1 sposob - switch
    for(int i = 1; i < argc; i++){
        switch(*argv[i]){
            case '1': funcA(); break;
            case '2': funcB(); break;
            case '3': funcC(); break;
            default: error(); break;
        }
    }

    //2 sposob - operator ternarny
    char c;
    cout << "Wybierz funkcje: 1 - funcA(), 2 - funcB(), 3 - funcC()" << endl;
    cin >> c;
    (c == '1') ? funcA() : ((c == '2') ? funcB() : ((c == '3') ? funcC() : error()));
}

void ZadKcpp::priorytetyOperatorow(){
    int x = 1;
    int y = 2;
    int z = 3;
    int result[] = {4, 4, 4, 4};

    result[0] *= -++x*x--+-y--%++z;
    cout << "0. " << result[0] << endl;

    result[1] *= -(++x)*(x--)+-(y--)%(++z);
    cout << "1. " << result[1] << endl;

    result[2] *= (-(++x))*(x--)+(-(y--))%(++z);
    cout << "2. " << result[2] << endl;

    result[3] *= ((-(++x))*(x--))+((-(y--))%(++z));
    cout << "3. " << result[3] << endl;
}

void ZadKcpp::decToBin(int number){
    int t = 0, tab[32];
    while(number){
        tab[t] = number % 2;
        number /= 2;
        t++;
    }
    for(int i = t-1; i >= 0; i--){
        cout << tab[i];
    }
}

int ZadKcpp::binToDec(int number){
    int result = 0, i = 0, temp;

    while (number != 0){
        temp = number % 10;
        result += (temp * pow(2, i));
        i++;
        number /= 10;
    }

    return result;
}

int main(int argc, char* argv[]){
    ZadKcpp example(10);
    example.show(argc, argv);
    cout << example.wartoscLiczba() << endl;
    cout << *example.wskaznikLiczba() << endl;
    cout << example.referencjaLiczba() << endl;
    cout << example.tablica()[2] << endl;
    example.adresowaniePamieci();
    example.arytmetykaWskaznikow();
    example.wywolanieFunkcji(argc, argv);
    example.priorytetyOperatorow();
    example.decToBin(10);
    cout << endl;
    cout << example.binToDec(1010) << endl;
    return 0;
}
