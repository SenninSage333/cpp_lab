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

    // niebezpieczeñstwo korzystania z kilku obiektów uni jednoczeœnie, wykorzystywany jest tylko ostatni aktywny element st¹d wynik jest potêg¹ dugiej podanej liczby
    cout << przyklad.jeden * przyklad.dwa << endl;
    return 0;
}
