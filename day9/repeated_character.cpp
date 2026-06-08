#include<iostream>
using namespace std;

int main()
{

    char count = 'A';

        for(int i=0; i<5; i++)
        {
            for(int j=0; j<=i; j++)
            cout << count << " " ;
            count++;
            cout << endl;
            
        }
        //logic for same   
        char ch ='A'-1;
         for(int i= 0; i<5; i++){
        ch++;
        for(int j =0;  j <=i; j++)
        cout <<  ch << " " ;
        cout << endl;
       }
        // ye endl kaha aaega boht important hai 
        // kahi or lgaya to ans ki line badal ja rhi h

    return 0;
}