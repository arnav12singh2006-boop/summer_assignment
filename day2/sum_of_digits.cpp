#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the digit";
    cin>>n;
    int temp = n;
    int sum = 0;
    for(; temp>0; temp=temp/10 )
    sum = sum + temp%10 ;
    cout << "sum of digits are--" << sum << endl;

    return 0; 
}