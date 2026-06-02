#include<iostream>
using namespace std;

int main(){
    // pehle number lete hai
    int n;

    cout << "enter the number to be reversed";
    cin >> n;
    // number ko todke ulta add krvate hai
    int temp = n;
    int rev_sum = 0 ;
    for(; temp>0; temp=temp/10)
    rev_sum = (10*rev_sum) + (temp%10);
    cout << "the revserse number is -->" << rev_sum;
    //bs isko agr number is check krvaya or number ke equal agya to ye palindrom ho jata h


    return 0;
}