#include<iostream>
using namespace std;

int main(){
    //armstrong number ek aisa number hai jiske digits ke cube ka sum ussi number ke brabar aata hai
     int n;
     cout << " enter the number = ";
     cin>>n;
     int temp =n;
     int sum=0;
    for(; temp>0; temp=temp/10){
        int digit = temp%10;
        sum = sum + digit*digit*digit;
     //um = (temp%10)*(temp%10)*(temp%10);
      //mujhe cube ka function nhi pta
      //maine add krne ki bajae multiply kia tha
}
     
      if (sum==n)
      cout<<"the number is armstrong";
      else
      cout<<"the number is not armstrong";


    return 0;
}