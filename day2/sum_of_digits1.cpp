#include<iostream>
using namespace std;

int main(){

    //input lenge digits nikalenge add krdenge
    int n;
    int sum = 0; 
    cout << "enter the digit";
    cin >> n;
    for (; n>0; n/10 )
    //n=n/10; hona chaie tha
    sum = sum + n%10;
    
    cout << "sum of digits is --" << sum;
    return 0 ;

}