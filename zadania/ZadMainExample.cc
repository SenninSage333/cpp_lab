#include <iostream>
using namespace std;

#include <stdio.h>

void a(){
    cout << "Funkcja a" << endl;
}

void b(){
    cout << "Funkcja b" << endl;
}

void c(){
    cout << "Funkcja c" << endl;
}

extern "C"{
    int ca(){
        return 10;
    }

    int cb(){
        return 20;
    }
}

int main(int argc, char *argv[]){
    for(int i = 1; i < argc; i++){
        switch(*argv[i]){
            case '1': a(); break;
            case '2': b(); break;
            case '3': c(); break;
            case '4': cout << ca() << endl; break;
            case '5': cout << cb() << endl; break;
            default: cout << "There is no such function" << endl;
        }
    }
}
