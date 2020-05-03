#include<iostream>
#include<cmath>
using namespace std;

int binToDec(int number){
    int result = 0, i = 0, temp;

    while (number != 0){
        temp = number % 10;
        result += (temp * pow(2, i));
        i++;
        number /= 10;
    }

    return result;
}

int main(){
    int number;
    cout << "Podaj liczbe w systemie binarnym: " << endl;
    cin >> number;
    cout << "Podana liczba w systemie dziesietnym wynosi: " << endl;
    cout << binToDec(number) << endl;
    return 0;
}
