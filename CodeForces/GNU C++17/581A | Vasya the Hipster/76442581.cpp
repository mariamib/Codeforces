#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num1,num2,one;cin>>num1>>num2;
    if(num1>=num2)
    {
        num1-=num2;
        one=num2;
        num2=0;
         cout<<one<<" "<<num1/2;
    }
    else
    {
        num2-=num1;
        one=num1;
        num1=0;
         cout<<one<<" "<<num2/2;
    }
 
}