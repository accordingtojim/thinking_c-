#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;
int main() {
    vector<string> myvector;
    string word;
    ifstream in("text.txt");
    while (in>>word){
        cout<<word<<endl;
        cin;
    }
}