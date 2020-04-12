#include<iostream>
#include<cstdio>
#include<iomanip>
using namespace std;

int main(){
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

    return 0;
}
