#ifndef ZAD_KCPP_H
#define ZAD_KCPP_H
#include <iostream>
using namespace std;

class ZadKcpp {
private:
    void funcA();
    void funcB();
    void funcC();
    void error();
public:
    ZadKcpp();
    ZadKcpp(int x);
    int liczba;
    void show(int argc, char* argv[]);
    int wartoscLiczba();
    int* wskaznikLiczba();
    int& referencjaLiczba();
    int* tablica();
    void adresowaniePamieci();
    void arytmetykaWskaznikow();
    void wywolanieFunkcji(int argc, char* argv[]);
    void priorytetyOperatorow();
    void decToBin(int number);
    int binToDec(int number);
};

int tab[] = {1, 2, 3, 4, 5};
#endif
