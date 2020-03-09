#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char mystring3[20];
	mystring3[0] = 'H';
	mystring3[1] = 'e';
	mystring3[2] = 'y';
	mystring3[3] = '\0';
	strcpy(mystring3, "Hello everyone");
	cout << "mystring3: " << mystring3 << endl;
	cout << mystring3[0] << endl;
        cout << mystring3[1] << endl;
        cout << mystring3[2] << endl;
        cout << mystring3[3] << endl;
        cout << mystring3[4] << endl;
        cout << mystring3[5] << endl;
        cout << mystring3[6] << endl;
        cout << mystring3[7] << endl;
        cout << mystring3[8] << endl;
        cout << mystring3[9] << endl;
        cout << mystring3[10] << endl;
	cout << mystring3[11] << endl;
	cout << mystring3[12] << endl;

	int iA[3] = {1, 2, 3};
	cout << "int array size: " << sizeof(iA) << endl;
	double dA[3] = {1.0, 2.0, 3.0};
	cout << "double array size: " << sizeof(dA) << endl;
	cout << "strlen of mystring3: " << strlen(mystring3) << endl;
	cout << "sizeof of mystring3: " <<sizeof(mystring3) << endl;

	char str1[] = "Welcome to my page!";
	char str2[30];
	strncpy (str2, str1, sizeof(str2));
	cout << str1 << sizeof(str1) << "\n" << str2 << sizeof(str2) << endl;

	return 0;
}
