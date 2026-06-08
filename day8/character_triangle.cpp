#include<iostream>
using namespace std;

int main(){
    int j;
    
    for(int i= 0; i<5; i++){
       
        for( j =0;  j <=i; j++){ 
        
        cout << char ( 'A' + j)  << " " ;
         
        }
        
        
        cout << endl;
        
        // yaha ye smjh nhi aara ki hr letter ek ke baad change kaise hoga
        // i ya j plus krke answer glt aa rha h 
    }
   

    return 0;
}