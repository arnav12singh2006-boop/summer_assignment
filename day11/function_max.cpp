#include<iostream>
using namespace std;

int maxi(int a, int b){
    if(a>b)
    return a;
    else if (b>a)
    return b;
    else
    return -1;

}


int main(){
    int n,m;
    cout << "enter two numbers : " << endl;
    cin >> n >> m;
    cout << "maximum number is =" << maxi(n,m);

    return 0;
}