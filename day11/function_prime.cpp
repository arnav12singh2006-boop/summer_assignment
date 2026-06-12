#include<iostream>
using namespace std;


int prime(int a)
{

    for(int i=2; i<a; i++)
    {
        if(a%i==0)
        {
            return -1;
            break;
        }
        else
            return 1;
    }
}
    
int main()
    {
     int m;
     cout << "enter the number : " << endl;
     cin >> m;
     cout << prime(m);
     return 0;
    }

   
