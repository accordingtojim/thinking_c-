#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

//function to put a vector in a reversed order
vector<string> reverse(vector<string> vettore){
    vector<string> final_vector;
    for (int i=vettore.size();i!=0;i--){
    final_vector.push_back(vettore[i-1]);    
    vettore.pop_back();
    }
    return final_vector;
}
//fucntion to print a vector of string; could have used template function to be more generic
void print(vector<string> vettore){
    for (int i=0;i<vettore.size();i++)
    cout<<vettore[i]<<" ";
}

    int main(){
    vector<string> myvector;
    string word;
    ifstream in("text.txt");
    while (in>>word)
    myvector.push_back(word);
    print(reverse(myvector));
    return 0;
}