#include<iostream>
#include<iomanip>
using namespace std;

int work(int v);

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
 cout << work(a) << ' ' << work(5) << ' ' << work(0) << endl;

 int t1 = 22;
 int t2 = 7;
 std::cout << std::fixed << std::setprecision(2) << "a/b: " << t1/t2 << endl; 
return 0;
}

int work(int v) {
 static int first = 0;
 first++;
 if(!v)
	return first;
 return v;
}
