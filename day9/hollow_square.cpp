#include<iostream>
using namespace std;

int main()
    {
         int n=5;
       for(int i=1; i<=n; i++)
       {
          for(int j=1; j<=n; j++)
          {
            if(i==1 || i==n || j==n || j==1)
            cout << "*";
            else
            cout << " ";
          } 
          cout << endl; 
       }
        //idk what i have written
       /* for(int i=1; ;)
        {
          for(int j=1; j<=5; j++)
          cout << " * ";
        }
        for(int i=5; ;)
        {
          for(int j=1; j<=5; j++)
          cout << " * ";
        }

        for(int i=2; i<=4 ; i++)
        {
          for(int j=2; j<=4 ; j++)
          cout << " ";
        }
        
        for(int i=2; i<=4 ; i++)

        {
          for(int j=2; ;)
          cout << " * ";
        }

        for(int i=2; i<=4 ; i++)

        {
          for(int j=5 ; ;)
          cout << " * ";
        }
        */
       //easy h ai se seekha abhi
      
        return 0;
    }