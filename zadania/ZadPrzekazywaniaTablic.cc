#include<iostream>
using namespace std;

void passArray(int *tab, unsigned int s){

    cout << "Size of passed array: " << s << endl;
    for(int i = 0; i<s; i++){
        cout << tab[i] << endl;
    }

}

int main(){

    int arr[5] = {1, 2, 3};
    unsigned int s = sizeof(arr)/sizeof(arr[0]);
    passArray(arr, s);

    return 0;
}
