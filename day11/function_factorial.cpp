#include<iostream>
using namespace std;

int factorial(int a){
    if(a<0)
    return -1;
    else if (a==0 || a==1)
    return 1;
    else{
    int sum = 1;
    for(int i=1; i<=a; i++)
    {
        sum = sum*i;
    }
    return sum;
}
}

int main(){
    int m;
    cout << "enter the digit :" << endl;
    cin >> m;
    cout << "factorial of our digit is : " << factorial(m);

    return 0;
}