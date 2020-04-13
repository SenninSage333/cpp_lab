#include <iostream>
#include <iterator>
using namespace std;

//---------------------------------
void przekaz1D(int tab[]){ ///Przekazywanie tablic 1D
    for (int i = 0; i<6; i++){
        cout << i << "\t" << tab[i] << endl;
     }
    tab[0] = 127;
    cout << sizeof(&tab) << endl;
    cout << sizeof(tab)/sizeof(*tab) << endl;
    cout <<"Zmieniæ tablice w funkcji. Wypisaæ poza funkcj¹."<< endl;
    cout <<"Czy wartoœci poza funkcj¹ siê zmieni³y?"<< endl;
    cout <<"-------------------"<< endl;
}

void przekaz1Dwsk(int *tab){ ///Przekazywanie tablic 1D
    //Pass an array. Array decays to a pointer. Thus you lose size information
    //int iSize = *(&tab + 1) - tab;
    //cout <<"Tab size: "<< iSize << endl;
    for (int i = 0; i<6; i++){
        cout << i << "\t" << tab[i] << endl;
    }
    tab[0] = 366;
    cout << sizeof(tab)/sizeof(*tab) << endl;
    cout <<"Zmieniæ tablice w funkcji. Wypisaæ poza funkcj¹."<< endl;
    cout <<"Czy wartoœci poza funkcj¹ siê zmieni³y?"<< endl;
    cout <<"-------------------"<< endl;
}

void przekaz2D(int tab[3][3]) {///Przekazywanie tablic 2D
	for (int i = 0; i<3; i++){
		for (int j = 0; j<3;j++) {
			cout <<"("<< i <<", "<< j <<")\t"<< tab[i][j] << endl;
		}
	}
	tab[0][0] = 100;
  cout <<"-------------------"<< endl;
}

int main() {

	int tablica1D[6] = {1,2,3,4,5,6};

    // nazwa tablicy to wskaŸnik na tablica[0]
    przekaz1D(tablica1D);

    for (int i = 0; i<6; i++){
        cout << i << "\t" << tablica1D[i] << endl;
    }

    cout << endl;

    przekaz1Dwsk(tablica1D);

    for (int i = 0; i<6; i++){
        cout << i << "\t" << tablica1D[i] << endl;
    }
    cout << endl;

    //--------------------------------------
	int tablica2D[3][3];

	//Wypelnienie tablicy 2D
	for (int i = 0; i<3; i++){
		for (int j = 0; j<3;j++){
			tablica2D[i][j] = i+j;
		}
	}
	przekaz2D(tablica2D);

	for (int i = 0; i<3; i++){
		for (int j = 0; j<3;j++) {
			cout <<"("<< i <<", "<< j <<")\t"<< tablica2D[i][j] << endl;
		}
	}

	return 0;
}
