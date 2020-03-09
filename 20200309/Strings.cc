#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
	string text1;
	text1 = "Ala";
	string text2( "ma" );
	string text3 = "kota.";
	string resulttext;
	resulttext = text1+" "+text2+" "+text3;
	cout << "text1: " << text1 << endl;
	cout << "text2: " << text2 << endl;
	cout << "text3: " << text3 << endl;
	cout << "resulttext: " << resulttext << endl;

	if(text1 == text2) cout << "text1 i text 2 sa takie same" << endl;
	if(text3 != text1) cout << "text3 i text1 nie sa takie same" << endl;

	int l = resulttext.length();
	cout << l << endl;
	for(int i=1; i<l; i+=2){
		resulttext[i] = '0';
	}
	cout << resulttext << endl;
	return 0;
}
