#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

vector<string> reverse(vector<string> vettore){
    vector<string> final_vector;
    for (int i=0;i<vettore.size();i++){
    final_vector[i]=vettore.back();
    vettore.pop_back();
    }
    return(final_vector);
}
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
    //myvector=reverse(myvector);
    print(myvector);
    return 0;
}