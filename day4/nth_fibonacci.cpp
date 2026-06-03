#include<iostream>
using namespace std;

int main(){
    //nth fibonacci term nikalne ke lie series bhi likhni hogi 
    //pr har ek ko print krvane ki bajae hm last mai print krvaenge sum ko
     int n;
    cout << "terminating value is:-->";
    cin >> n;
    if(n==0)
    cout << "0";
    else if (n==1)
    cout << "1";
else{ 
    int a = 0;
    int b = 1;
    int sum = 0;
     for(int i=0 ; i<n -2; i++){
        sum = a+b;
        
        
        a=b;
        b=sum;

    }
    cout << sum ;
}
   //a=b;
   //b=sum;
    //code glt aa rha hai and according to chatgpt we are updating the value outside the loop so thats our mistake
    //output is not stopping so we will give a terminating value

    return 0;
}