#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int num1,num2;cin>>num1>>num2;
   
     if(6-(max(num1,num2)-1)==1)
        cout<<1<<"/"<<6;
    else if(6-(max(num1,num2)-1)==2)
        cout<<1<<"/"<<3;
    else if(6-(max(num1,num2)-1)==3)
        cout<<1<<"/"<<2;
    else if(6-(max(num1,num2)-1)==4)
        cout<<2<<"/"<<3;
    else if(6-(max(num1,num2)-1)==5)
        cout<<5<<"/"<<6;
    else if(num1==num2)
        cout<<1<<"/"<<1;
    else
        cout<<0;
}