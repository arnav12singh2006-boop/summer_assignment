#include<iostream>
using namespace std;
// void sum krne pe error aa rha tha
int sum(int a, int b){
    return a+b;

}
int main(){
    int n,m;
  cout << "enter two numbers :" << endl;
  cin >> n >> m;
  cout << "sum = " << sum(n,m); 
// return pe sum bhi kr skte h = no yaha sum cout mai aaega function mai hi return pr aata hai
    return 0;
}