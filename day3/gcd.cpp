#include<iostream>
using namespace std;

int main(){
    //do number hai unka highest common divsior nikalna h
    //48 or 36 mai 12 aega ans
    int a,b;
    cout <<"input two numbers";
    cin >> a >> b; 
for(int i = min(a,b); i>=1; i-- )
     if(a%i==0 && b%i==0){
     
     cout << i;
     break;
     }
     

    return 0;
}