#include<iostream>
using namespace std;

// palindrome number = number read same in both directions
int palindrome(int a)
{
    int sum=0;
    int temp = a;
  for( ; temp>0 ; temp=temp/10)
  {
    sum = (10*sum) + a%10;
    a = a/10;

  }
  return sum;

}

int main(){
    int m;
    cout << "enter the number :" << endl;
    cin >> m;
    int check =m;
    if (check == palindrome(m))
    cout << " number is palindrome";
    else
    cout << "number in not palindrome";

    return 0;
}