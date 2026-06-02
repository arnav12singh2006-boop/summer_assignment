#include<iostream>
using namespace std;

int main(){
    // ek number lena hai
    //product =1
    //product = product * (n%10)
    int n ;
    int product =1;
    cout << "enter the number ";
    cin >> n;
    for( ; n>0; n=n/10)
    product = product * (n%10);

    cout << "product of digits are--" << product;


    return 0;
}