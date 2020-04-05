#include<iostream>
using namespace std;

int main(){
    int t[2] = {1, 2};
    int i = 0;
    cout << "t[2] = {1, 2}" <<endl;
    cout << "i: " << i << endl;
    cout << "t[i]: " << t[i] << endl;
    cout << "i[t]: " << i[t] << endl;

    /* t[i] jest rowne i[t] poniewaz t jest wskaznikiem na 1 element tablicy, wiec i[t] jest odczytaniem wartosci wskaznika t przesunietego o 'i' miejsc,
    tym samym i[t] jest rownowazne z zapisem t[i] oraz *(t+i) i *(i+t) */

    return 0;
}
