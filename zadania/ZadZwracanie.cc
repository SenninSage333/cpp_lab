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
    cout << "Wartossc" << endl;
    cout << wartosc() << endl;
    cout << "Wskaznik" << endl;
    cout << *wskaznik() << endl;
    cout << "Referencja" << endl;
    cout << referencja(2) << endl;
    cout << "Tablica" << endl;
    for(int i = 0; i<3; i++){
        cout << i << "\t" << tablica()[i] << endl;
    }

    return 0;
}
