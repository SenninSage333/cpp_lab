#include <iostream>
#include <cstring>
using namespace std;

string tab[] = {"Berlin", "Tokio", "Nairobi"};

int znajdz(string s)
{
    for (int i = 0; i < 3; i++)
    {
        if (s == tab[i])
            return i;
    }
    return -1;
}

int main()
{
    string s;
    cout << "Podaj miasto\n[Berlin], [Tokio], [Nairobi]: ";
    cin >> s;
    int i = znajdz(s);
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
    return 0;
}
