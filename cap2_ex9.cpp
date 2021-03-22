/*Create three vector<float> objects and fill the first two as
in the previous exercise. Write a for loop that adds each
corresponding element in the first two vectors and puts
the result in the corresponding element of the third
vector. Display all three vectors*/
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;
void print(vector<float> vettore){
    for (int i=0;i<vettore.size();i++)
    cout<<vettore[i]<<" ";
}
int main() {
    vector<float> vector1,vector2,vector3;
    //generation of 2 vectors
    for (int i=0;i<25;i++){
    vector1.push_back(3.3+i);
    vector2.push_back(1.3+i);
    }
    //adding the 2 vector in the 3rd one
    for (int i=0;i<25;i++){
        vector3[i]=vector1[i]+vector2[i];
    print(vector2);
    print(vector1);
    print(vector3);
    }
