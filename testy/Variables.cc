#include<iostream>
using namespace std;

int main(){
 int a = 2;
 float b = 3.14;
 auto c = 5.27;
 static float d = 2.97;
 char e[] = "Typical text";
 char f[10];
 cout << a << " size:" << sizeof(a) << endl;
 cout << b << " size:" << sizeof(b) << endl;
 cout << c << " size:" << sizeof(c) << endl;
 cout << d << " size:" << sizeof(d) << endl;
 cout << e << " size:" << sizeof(e) << endl;
 cout << f << " size:" << sizeof(f) << endl;
 return 0;
}
