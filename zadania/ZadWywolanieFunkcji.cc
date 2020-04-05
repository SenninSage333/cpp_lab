#include <iostream>
#include <cstring>
using namespace std;

void funA(){
    cout << "Funkcja A" << endl;
}

void funB(){
    cout << "Funkcja B" << endl;
}

void error(){
    cout << "There is no such function" << endl;
}

int main(int argc, char* argv[]){

    //1 sposob - switch
    for(int i = 1; i < argc; i++){
        switch(*argv[i]){
            case '1': funA(); break;
            case '2': funB(); break;
            default: error(); break;
        }
    }

    //2 sposob - operator ternarny
    char c;
    cout << "Wybierz funkcje: 1 - funA(), 2 - funB()" << endl;
    cin >> c;
    (c == '1') ? funA() : ((c == '2') ? funB() : error());
    return 0;
}
