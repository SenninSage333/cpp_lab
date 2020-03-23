#include <iostream>
using namespace std;

int tab[] = {1, 2, 3};

int wartosc(){
    return 256;
}

int* wskaznik(){
    int r = 12;
    int *p = &r;
    return p;
}

int& referencja(int i){
    return tab[i];
}

int* tablica(){
    return tab;
}

int main(){
    cout << wartosc() << endl;
    cout << *wskaznik() << endl;
    cout << referencja(2) << endl;
    cout << *tablica() << endl;

    return 0;
}
