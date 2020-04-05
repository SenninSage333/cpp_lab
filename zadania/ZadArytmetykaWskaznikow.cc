#include <iostream>
using namespace std;

int main() {
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

    return 0;
}
