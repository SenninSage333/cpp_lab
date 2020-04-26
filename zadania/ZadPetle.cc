#include <iostream>
using namespace std;

int tab[] = {2, 5, 3, 1, 6, 9, 4, 0, 7, 8};
void parzyste(int x){
    for (int i = 0; i <= x; i++){
        if (i%2 != 0) continue;
        cout << i << endl;
    }
}

int znajdz(int x, int tab[], int roz){
    int i = 0;
    while(true){
        if(i == roz) break;
        if(x == tab[i]) return i;
        i++;
    }
    return -1;
}

int main(){
    int i = 0;
    int x = 0;
    while(i < 5){
        i++;
        ++x;
    }
    cout << "i: " << i << "\nx: " << x << endl;

    i = 0;
    x = 0;
    do{
        i++;
        ++x;
    } while(i < 5);
    cout << "i: " << i << "\nx: " << x << endl;

    parzyste(10);

    int indeks = znajdz(0, tab, 10);
    cout << "znaleziony indeks: " << indeks << endl;

    return 0;
}
