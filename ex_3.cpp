/*Create a program that opens a file and counts the
whitespace-separated words in that file.*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    string word;
    int counter=0;
    ifstream in("text.txt");
    while(in>>word){
        if (word =="creato")
        counter++;
    }
    cout<<counter<<endl;
}
