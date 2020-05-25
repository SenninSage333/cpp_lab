#ifndef ZAD_KCPP_H
#define ZAD_KCPP_H
#include <iostream>
#include <string>
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
    void passArray(int *tab, unsigned int s);
    void writeToFile(string filename, string text);
    void readFromfile(string filename);
    void cAndCpp();
    void parzyste(int x);
    int znajdz(int x, int tab[], int roz);
    void petle();
    int znajdzString(string s, string tab[]);
    void showSwitch();
};

int tab[] = {1, 2, 3, 4, 5};
#endif
