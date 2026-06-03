#include<iostream>
using namespace std;

int main(){
    //first 2 are  0 1
    // add and add for further
    int n;
    cout << "terminating value is:-->";
    cin >> n;
    cout <<" 0  1  ";
    
    int a = 0;
    int b = 1;
    int sum = 0;
     for(int i=0 ; i<n; i++){
        sum = a+b;
        cout << sum << "  ";
        
        a=b;
        b=sum;

    }
   //a=b;
   //b=sum;
    //code glt aa rha hai and according to chatgpt we are updating the value outside the loop so thats our mistake
    //output is not stopping so we will give a terminating value

    return 0;
}