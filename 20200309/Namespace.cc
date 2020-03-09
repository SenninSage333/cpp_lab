#include <iostream>
using namespace std;

namespace myN {
	int b = 3;
	int ff(int a){
		if(a==7){
			return 0;
		}
		return 1;
	}
}

using namespace myN;

int main() {
	int b = 5;
	cout << "Main b: " << b << endl;
	cout << "myN b: " << myN::b << endl;
	cout << "myN function: " << ff(b) << endl; 
	return 0;
}
