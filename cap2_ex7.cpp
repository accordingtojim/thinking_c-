#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;
int main() {
    vector<string> myvector;
    string line;
    ifstream in("text.txt");
    while (getline(in,line)){
        cout<<line<<endl;
        cin.get();
    }
}
//version to print lines