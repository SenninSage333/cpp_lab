#include<iostream>
#include<fstream>
#include<cstring>
#include<string>
using namespace std;

int main(){
    string s;
    cout << "Append to file: " << endl;
    getline(cin, s);
    ofstream file;
    file.open("example.txt", ios_base::app);
    if(file.is_open()){
       file << s << "\n";
       file.close();
    } else cout << "Error" << endl;

    cout << endl << "Reading from file" << endl << endl;;

    ifstream rfile;
    string line;
    rfile.open("example.txt");
    if(rfile.is_open()){
        while(getline(rfile, line)){
            cout << line << endl;
        }
        rfile.close();
    } else cout << "Error" << endl;

    return 0;
}
