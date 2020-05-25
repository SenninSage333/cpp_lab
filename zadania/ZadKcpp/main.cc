#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <cmath>
#include "ZadKcpp.h"
using namespace std;

ZadKcpp::ZadKcpp() : liczba(0){};

ZadKcpp::ZadKcpp(int x) : liczba(x){};

void ZadKcpp::funcA()
{
    cout << "funkcja a" << endl;
}

void ZadKcpp::funcB()
{
    cout << "funkcja b" << endl;
}

void ZadKcpp::funcC()
{
    cout << "funkcja c" << endl;
}

void ZadKcpp::error()
{
    cout << "There is no such function" << endl;
}

void ZadKcpp::show(int argc, char *argv[])
{
    for (int i = 1; i < argc; i++)
    {
        switch (*argv[i])
        {
        case '1':
            funcA();
            break;
        case '2':
            funcB();
            break;
        case '3':
            funcC();
            break;
        default:
            error();
            break;
        }
    }
}

int ZadKcpp::wartoscLiczba()
{
    return liczba;
}

int *ZadKcpp::wskaznikLiczba()
{
    int *p = &liczba;
    return p;
}

int &ZadKcpp::referencjaLiczba()
{
    return liczba;
}

int *ZadKcpp::tablica()
{
    return tab;
}

void ZadKcpp::adresowaniePamieci()
{
    int A;
    int B;
    float C;
    double D;
    int *K;

    unsigned long a = (unsigned long)&A;
    cout << "Adres zmiennej int A (dec): " << dec << a << endl;
    cout << "Adres zmiennej int A (hex): " << &A << endl;
    unsigned long b = (unsigned long)&B;
    cout << "Adres zmiennej int B (dec): " << dec << b << endl;
    cout << "Adres zmiennej int B (hex): " << &B << endl;
    unsigned long c = (unsigned long)&C;
    cout << "Adres zmiennej float C (dec): " << dec << c << endl;
    cout << "Adres zmiennej float C (hex): " << &C << endl;
    unsigned long d = (unsigned long)&D;
    cout << "Adres zmiennej double D (dec): " << dec << d << endl;
    cout << "Adres zmiennej double D (hex): " << &D << endl;
    unsigned long k = (unsigned long)&k;
    cout << "Adres zmiennej int* K (dec): " << dec << k << endl;
    cout << "Adres zmiennej int* K (hex): " << &K << endl;
}

void ZadKcpp::arytmetykaWskaznikow()
{
    int tab[7] = {0, 2, 4, 8, 10, 20, 30};
    int *p;
    p = tab;

    cout << "p++ przesuwa wskaznik na nastepny adres w pamieci" << endl;
    cout << "Before\ntab: ";
    for (int i = 0; i < 7; i++)
    {
        cout << tab[i] << ", ";
    }
    cout << endl;
    cout << "p: " << *p << endl;
    p++;
    cout << "p++: " << *p << endl;
    cout << "After\ntab: ";
    for (int i = 0; i < 7; i++)
    {
        cout << tab[i] << ", ";
    }
    cout << "\n"
         << endl;

    cout << "++p przesuwa wskaznik na nastepny adres w pamieci" << endl;
    cout << "Before\ntab: ";
    for (int i = 0; i < 7; i++)
    {
        cout << tab[i] << ", ";
    }
    cout << endl;
    cout << "p: " << *p << endl;
    ++p;
    cout << "++p: " << *p << endl;
    cout << "After\ntab: ";
    for (int i = 0; i < 7; i++)
    {
        cout << tab[i] << ", ";
    }
    cout << "\n"
         << endl;

    cout << "++*p inkrementuje wartosc na ktora wskazuje wskaznik" << endl;
    cout << "Before\ntab: ";
    for (int i = 0; i < 7; i++)
    {
        cout << tab[i] << ", ";
    }
    cout << endl;
    cout << "p: " << *p << endl;
    ++*p;
    cout << "++p*: " << *p << endl;
    cout << "After\ntab: ";
    for (int i = 0; i < 7; i++)
    {
        cout << tab[i] << ", ";
    }
    cout << "\n"
         << endl;

    cout << "++(*p) inkrementuje wartosc na ktora wskazuje wskaznik" << endl;
    cout << "Before\ntab: ";
    for (int i = 0; i < 7; i++)
    {
        cout << tab[i] << ", ";
    }
    cout << endl;
    cout << "p: " << *p << endl;
    ++(*p);
    cout << "++(*p): " << *p << endl;
    cout << "After\ntab: ";
    for (int i = 0; i < 7; i++)
    {
        cout << tab[i] << ", ";
    }
    cout << "\n"
         << endl;

    cout << "++*(p) inkrementuje wartosc na ktora wskazuje wskaznik" << endl;
    cout << "Before\ntab: ";
    for (int i = 0; i < 7; i++)
    {
        cout << tab[i] << ", ";
    }
    cout << endl;
    cout << "p: " << *p << endl;
    ++*(p);
    cout << "++*(p): " << *p << endl;
    cout << "After\ntab: ";
    for (int i = 0; i < 7; i++)
    {
        cout << tab[i] << ", ";
    }
    cout << "\n"
         << endl;

    cout << "*p++ przesuwa wskaznik na nastepny adres w pamieci" << endl;
    cout << "Before\ntab: ";
    for (int i = 0; i < 7; i++)
    {
        cout << tab[i] << ", ";
    }
    cout << endl;
    cout << "p: " << *p << endl;
    *p++;
    cout << "*p++: " << *p << endl;
    cout << "After\ntab: ";
    for (int i = 0; i < 7; i++)
    {
        cout << tab[i] << ", ";
    }
    cout << "\n"
         << endl;

    cout << "(*p)++ inkrementuje wartosc na ktora wskazuje wskaznik" << endl;
    cout << "Before\ntab: ";
    for (int i = 0; i < 7; i++)
    {
        cout << tab[i] << ", ";
    }
    cout << endl;
    cout << "p: " << *p << endl;
    (*p)++;
    cout << "(*p)++: " << *p << endl;
    cout << "After\ntab: ";
    for (int i = 0; i < 7; i++)
    {
        cout << tab[i] << ", ";
    }
    cout << "\n"
         << endl;

    cout << "*(p)++ przesuwa wskaznik na nastepny adres w pamieci" << endl;
    cout << "Before\ntab: ";
    for (int i = 0; i < 7; i++)
    {
        cout << tab[i] << ", ";
    }
    cout << endl;
    cout << "p: " << *p << endl;
    *(p)++;
    cout << "*(p)++: " << *p << endl;
    cout << "After\ntab: ";
    for (int i = 0; i < 7; i++)
    {
        cout << tab[i] << ", ";
    }
    cout << "\n"
         << endl;

    cout << "*++p przesuwa wskaznik na nastepny adres w pamieci" << endl;
    cout << "Before\ntab: ";
    for (int i = 0; i < 7; i++)
    {
        cout << tab[i] << ", ";
    }
    cout << endl;
    cout << "p: " << *p << endl;
    *++p;
    cout << "*++p: " << *p << endl;
    cout << "After\ntab: ";
    for (int i = 0; i < 7; i++)
    {
        cout << tab[i] << ", ";
    }
    cout << "\n"
         << endl;

    cout << "*(++p) przesuwa wskaznik na nastepny adres w pamieci" << endl;
    cout << "Before\ntab: ";
    for (int i = 0; i < 7; i++)
    {
        cout << tab[i] << ", ";
    }
    cout << endl;
    cout << "p: " << *p << endl;
    *(++p);
    cout << "*(++p): " << *p << endl;
    cout << "After\ntab: ";
    for (int i = 0; i < 7; i++)
    {
        cout << tab[i] << ", ";
    }
    cout << "\n"
         << endl;
}

void ZadKcpp::wywolanieFunkcji(int argc, char *argv[])
{
    //1 sposob - switch
    for (int i = 1; i < argc; i++)
    {
        switch (*argv[i])
        {
        case '1':
            funcA();
            break;
        case '2':
            funcB();
            break;
        case '3':
            funcC();
            break;
        default:
            error();
            break;
        }
    }

    //2 sposob - operator ternarny
    char c;
    cout << "Wybierz funkcje: 1 - funcA(), 2 - funcB(), 3 - funcC()" << endl;
    cin >> c;
    (c == '1') ? funcA() : ((c == '2') ? funcB() : ((c == '3') ? funcC() : error()));
}

void ZadKcpp::priorytetyOperatorow()
{
    int x = 1;
    int y = 2;
    int z = 3;
    int result[] = {4, 4, 4, 4};

    result[0] *= -++x * x-- + -y-- % ++z;
    cout << "0. " << result[0] << endl;

    result[1] *= -(++x) * (x--) + -(y--) % (++z);
    cout << "1. " << result[1] << endl;

    result[2] *= (-(++x)) * (x--) + (-(y--)) % (++z);
    cout << "2. " << result[2] << endl;

    result[3] *= ((-(++x)) * (x--)) + ((-(y--)) % (++z));
    cout << "3. " << result[3] << endl;
}

void ZadKcpp::decToBin(int number)
{
    int t = 0, tab[32];
    while (number)
    {
        tab[t] = number % 2;
        number /= 2;
        t++;
    }
    for (int i = t - 1; i >= 0; i--)
    {
        cout << tab[i];
    }
}

int ZadKcpp::binToDec(int number)
{
    int result = 0, i = 0, temp;

    while (number != 0)
    {
        temp = number % 10;
        result += (temp * pow(2, i));
        i++;
        number /= 10;
    }

    return result;
}

void ZadKcpp::passArray(int *tab, unsigned int s)
{

    cout << "Size of passed array: " << s << endl;
    for (int i = 0; i < s; i++)
    {
        cout << tab[i] << endl;
    }
}

void ZadKcpp::writeToFile(string filename, string text)
{
    const char* name = filename.c_str();
    cout << "Append to file: " << text << endl;
    ofstream file;
    file.open(name, ios_base::app);
    if (file.is_open())
    {
        file << text << "\n";
        file.close();
    }
    else
        cout << "Error" << endl;
}

void ZadKcpp::readFromfile(string filename)
{
    cout << endl
         << "Reading from file" << endl
         << endl;
    ;
    ifstream rfile;
    string line;
    const char* name = filename.c_str();
    rfile.open(name);
    if (rfile.is_open())
    {
        while (getline(rfile, line))
        {
            cout << line << endl;
        }
        rfile.close();
    }
    else
        cout << "Error" << endl;
}

void ZadKcpp::cAndCpp()
{
    //Standard output

    //in C
    printf("Output in C\n");

    //in CPP
    cout << "Output in CPP" << endl;

    //String output

    //in C
    char *cOut = "String output in C";
    printf("%s", cOut);
    printf("\n");

    //in CPP
    char *cppOut = "String output in CPP";
    cout << cppOut << endl;

    //Char output

    //in C
    printf("%c", 'a');
    printf("\n");
    char c = 'b';
    printf("%c", c);
    printf("\n");

    //in CPP
    cout << 'c' << endl;
    char cpp = 'd';
    cout << cpp << endl;

    //Int output

    //in C
    printf("%i", 23);
    printf("\n");
    printf("%x", 23);
    printf("\n");
    printf("%f", 23.3);
    printf("\n");

    //in CPP
    cout << 23 << endl;
    cout << hex << 23 << endl;
    cout << 23.3 << endl;
}

void ZadKcpp::parzyste(int x)
{
    for (int i = 0; i <= x; i++)
    {
        if (i % 2 != 0) continue;
        cout << i << endl;
    }
}

int ZadKcpp::znajdz(int x, int tab[], int roz)
{
    int i = 0;
    while (true)
    {
        if (i == roz) break;
        if (x == tab[i]) return i;
        i++;
    }
    return -1;
}

void ZadKcpp::petle()
{
    int tab[] = {2, 5, 3, 1, 6, 9, 4, 0, 7, 8};
    int i = 0;
    int x = 0;
    while (i < 5)
    {
        i++;
        ++x;
    }
    cout << "i: " << i << "\nx: " << x << endl;

    i = 0;
    x = 0;
    do
    {
        i++;
        ++x;
    } while (i < 5);
    cout << "i: " << i << "\nx: " << x << endl;

    ZadKcpp::parzyste(10);

    int indeks = znajdz(0, tab, 10);
    cout << "znaleziony indeks: " << indeks << endl;
}

int ZadKcpp::znajdzString(string s, string tab[])
{
    for (int i = 0; i < 3; i++)
    {
        if (s == tab[i])
            return i;
    }
    return -1;
}

void ZadKcpp::showSwitch(){
    string tab[] = {"Berlin", "Tokio", "Nairobi"};
    string s;
    cout << "Podaj miasto\n[Berlin], [Tokio], [Nairobi]: ";
    cin >> s;
    int i = znajdzString(s, tab);
    cout << endl;
    switch (i)
    {
    case 0:
        cout << "Powierzchnia: 891,8 km^2";
        break;
    case 1:
        cout << "Powierzchnia: 2188 km^2";
        break;
    case 2:
        cout << "Powierzchnia: 704 km^2";
        break;
    default:
        cout << "Brak danych o podanym miescie" << endl;
        break;
    }
}

int main(int argc, char *argv[])
{
    ZadKcpp example(10);
    example.show(argc, argv);
    cout << endl;
    cout << example.wartoscLiczba() << endl;
    cout << endl;
    cout << *example.wskaznikLiczba() << endl;
    cout << endl;
    cout << example.referencjaLiczba() << endl;
    cout << endl;
    cout << example.tablica()[2] << endl;
    cout << endl;
    example.adresowaniePamieci();
    cout << endl;
    example.arytmetykaWskaznikow();
    cout << endl;
    example.wywolanieFunkcji(argc, argv);
    cout << endl;
    example.priorytetyOperatorow();
    cout << endl;
    example.decToBin(10);
    cout << endl;
    cout << example.binToDec(1010) << endl;
    cout << endl;
    example.passArray(tab, sizeof(tab) / sizeof(tab[0]));
    cout << endl;
    example.writeToFile("example.txt", "One line of text.");
    cout << endl;
    example.readFromfile("example.txt");
    cout << endl;
    example.cAndCpp();
    cout << endl;
    example.petle();
    cout << endl;
    example.showSwitch();
    cout << endl;

    return 0;
}
