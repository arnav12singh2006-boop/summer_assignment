#include<iostream>
using namespace std;

int main(){
    // prime number vo jo khudse or 1 se divide ho bas baki kisi se hote hi loop cancle
    int n; 
    cout << "enter the number to check whether its prime or not";
    cin >> n ;
    int temp = n;
    for(int i= 2; i<temp ; i++ ){
        if(temp/i == 0)
            cout << "the number is not prime";
        else
        cout << "the number is prime";
        
    }
    return 0;
}