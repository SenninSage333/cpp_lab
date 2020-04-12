#include<iostream>
using namespace std;

void binToDec(int number){
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

int main(){
    int number;
    cout << "Podaj liczbe: " << endl;
    cin >> number;
    cout << "Podana liczba w systemie binarnym wynosi: " << endl;
    binToDec(number);
    cout << endl;

    return 0;
}
