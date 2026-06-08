#include<iostream>
using namespace std;

int main(){
    int count=0;
    for(int i= 0; i<5; i++){
        count++;
        for(int j =0;  j <=i; j++)
        cout <<  count << " " ;
        cout << endl;
      
     
    }
   

    return 0;
}