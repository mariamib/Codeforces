#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int num1,num2,num,b,n,k=1,q;cin>>num1>>num2>>n;
    while(1)
    {   if(k%2!=0)
        num=num1;
        else
            num=num2;
        int minn=min(num,n);
        for(int i=minn;i>0;i--)
    {
        if(n%i==0&&num%i==0)
           {
               b=i;
               break;
           }
    }
    k++;
    if(n<=b)
        break;
    n-=b;
 
    }
    if(k%2==0)
        cout<<0;
    else
        cout<<1;
 
}