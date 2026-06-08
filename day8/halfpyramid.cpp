#include<iostream>
using namespace std;

int main(){
    for(int i= 0; i<=5; i++){
        for(int j =0;  j <=i; j++)
        cout << " * " ;
        cout << endl;
        // ye endl kaha aaega boht important hai 
        // kahi or lgaya to ans ki line badal ja rhi h
     
    }
   

    return 0;
}