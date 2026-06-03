#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    // function vhi rehga bs ab vo function ek range ke andr follow hoga
    int n,m;
    

    cout<<"enter first value=";
    cin>>n;
     cout<<"enter second value=";
     cin>>m;
     for(int i =min(n,m); i<=max(n,m); i++){
        int sum =0;
        int temp = i;
        for(; temp>0; temp=temp/10){
        int digits = temp%10;
        sum = sum + digits*digits*digits;
        }
        //do galtia aae thi ismai 
        //sum=0 ko for loop ke andr intialise krna tha 
        //include<algorithm> ye nhi likha tha
    
     if(sum==i)
     cout<< i;
    
}

    
    return 0;
}