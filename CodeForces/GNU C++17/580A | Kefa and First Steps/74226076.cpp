#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,a,b;
    int h=0,k=0;
    cin>>num;
    for(int i=0;i<num;i++)
    {
        cin>>a;
        if(i>0)
        {
            if(b<=a)
            {
                h++;
                if(i==num-1)
                    h++;
            }
            else
 
             {
 
                h++;
                if(k<h)
                    k=h;
                h=0;
             }
        }
 
 
        b=a;
    }
     if(k<h)
        k=h;
    if(num==1)
        k=1;
    cout<<k;
}