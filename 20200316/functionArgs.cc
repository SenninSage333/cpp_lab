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
        if(*argv[i] == '1'){
            a();
        } else if(*argv[i] == '2'){
            b();
        } else if(*argv[i] == '3'){
            c();
        } else if(*argv[i] == '4'){
            cout << ca() << endl;
        } else if(*argv[i] == '5'){
            cout << cb() << endl;
        }
    }
}
