#include<iostream>
using namespace std;

int main(){
    class A{
    public:
        int x;
        A(){x = 10;}
        A(int s) : x(s){}
    };

    A a(5);
    A b;
    A* t = new A(7);
    cout << a.x << endl;
    cout << b.x << endl;
    cout << t->x << endl;
}
