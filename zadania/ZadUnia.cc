#include <iostream>
using namespace std;
int main(){

    union unia{
        int jeden;
        int dwa;
    };

    unia przyklad;
    cin >> przyklad.jeden;
    cin >> przyklad.dwa;

    // niebezpiecze�stwo korzystania z kilku obiekt�w uni jednocze�nie, wykorzystywany jest tylko ostatni aktywny element st�d wynik jest pot�g� dugiej podanej liczby
    cout << przyklad.jeden * przyklad.dwa << endl;
    return 0;
}
