#include<iostream>
#include<cmath>
#include<vector>
using namespace std;


int armstrong(int n)
{
    int temp1 = n;
    int temp =n;
    int sum =0;
    int i=0;
    int ans=0;
    for(  ; temp>0; temp= temp/10 )
    {
     i++;

    } 
    ans =i;
    for( ; temp1>0; temp1 = temp1/10){
       sum += static_cast<int>(pow(temp1 % 10, ans) + 0.5);
    }

    return sum;
}
int main(){

    int m;
    cout << "enter number to check armstrong :" << endl;
    cin >> m;
    int check = armstrong(m);
    if(check == m)
    cout << "yes it is armstrong" ;
    else 
    cout << " not armstrong number ";

    return 0;
}