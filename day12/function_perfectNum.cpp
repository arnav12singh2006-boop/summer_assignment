#include<iostream>
using namespace std;

// perfect number vo hota hai jiske divisor ka sum ussi number ke brabr ajae

int perfect(int a)
{
    int sum = 0;
    for (int i=1; i<a; i++)
    //i<=a nhi hoga kyuki i=a ko add nhi krna h aise to koi perfect nhi aaega
    {
        if(a%i==0)
        {
          sum = sum + i;
        }
        // break nhi lgana kyuki phir vo first time pe hi exit krlega
        
    }
    return sum;
}


int main(){

    int m;
    cout << "Enter a number to check whether it is perfect or not :" << endl;
    cin>> m;
    int check=m;
    if (check == perfect(m))
    cout << "perfect number ";
    else
    cout << " not a perfect number ";

    return 0;
}