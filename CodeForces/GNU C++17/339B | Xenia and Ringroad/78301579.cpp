#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    long long num1,num2,counter=0,a,s=1;cin>>num1>>num2;
    for(long long i=1;i<=num2;i++)
    {
        cin>>a;
        if(a>=s)
        {
            counter+=a-s;
            s=a;
        }
        else
        {
            counter+=(num1-s)+a;
            s=a;
        }
    }
 
    cout<<counter;
 
 }