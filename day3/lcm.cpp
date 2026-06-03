#include<iostream>
using namespace std;

int main(){
    //least common multiplier
    int a,b;
    cout << "first number = ";
    cin>> a;
    cout << "second number = ";
    cin >> b;
    for (int i = max(a,b); i>0; i++)
     //manlete hai 15 and 10 lie usne 15 ko pick krke loop chlaya 
     //loop tbtk chlega jbtk dono ko divide krke zero na aae
     if(i%a==0 && i%b==0){
        cout << i;
        break;

     }
    return 0;
}