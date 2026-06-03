#include<iostream>
using namespace std;

int main(){
    //prime vo jo khudse or 1 se divisible hojae
    int n;
    int m;
    cout << "enter 2 numbers in which we find all prime numbers";
    cout << "enter first small number";
    cin >> n;
    cout << "enter second large number";
    cin >> m;
    for (int i = n; i<=m; i++ ){    
      for (int a=2; a<i; a++)
        if(i%a != 0)
        cout << i << endl;
    }
    return 0;
}